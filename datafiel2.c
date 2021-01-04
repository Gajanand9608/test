#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","w");
    char c;
    while((c=fgetc(fp1))!=EOF)
    {
        if(c==' ')
        {
            
         fseek(fp1,-2,SEEK_CUR);
         c=fgetc(fp1);
         fprintf(fp2,"%c\n",c);
         fseek(fp1,2,SEEK_CUR);
        } 
    }
    fseek(fp1,-1,SEEK_CUR);
    c=fgetc(fp1);
         fprintf(fp2,"%c\n",c);
    fclose(fp1);
    fclose(fp2);
    return 0;
}