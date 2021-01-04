#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int len1=0,len2=0;
    char c1,c2;
    f1=fopen("a.txt","r");
    f2=fopen("b.txt","r");
    f3=fopen("e.txt","w");
    fseek(f1,0,SEEK_END);
    len1=ftell(f1);
    fseek(f2,0,SEEK_END);
    len2=ftell(f2);
    while(len1>0 && len2>0)
    {
        fseek(f1,-1,SEEK_CUR);
        fseek(f2,-1,SEEK_CUR);
        c1=fgetc(f1);
        
        c2=fgetc(f2);
        fprintf(f3,"%c%c",c1,c2);
         fseek(f1,-1,SEEK_CUR);
        fseek(f2,-1,SEEK_CUR);
        len1--;
        len2--;

    }
    while(len1>0)
    {
        fseek(f1,-1,SEEK_CUR);
        c1=fgetc(f1);
        fprintf(f3,"%c",c1);
        fseek(f1,-1,SEEK_CUR);
        len1--;
    }

    while(len2>0)
    {
        fseek(f2,-1,SEEK_CUR);
        c2=fgetc(f2);
        fprintf(f3,"%c",c2);
        fseek(f2,-1,SEEK_CUR);
        len2--;
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
    }