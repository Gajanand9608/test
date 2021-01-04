#include<stdio.h>
int main()
{ char c;
    FILE *fp1,*fp2;
    fp1=fopen("a.txt","r");
    fp2=fopen("c.txt","w");
    c=fgetc(fp1);
    while(c!=EOF)
    {
        fputc(c,fp2);
        c=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}