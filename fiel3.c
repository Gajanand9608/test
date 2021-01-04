#include<stdio.h>
int main()
{
    FILE *fp;
    int c;
    fp=fopen("name.txt","r");
    while((c=fgetc(fp))!=EOF)
    putchar(c);
    fclose(fp);
    return 0;
    
}