#include<stdio.h>
int main()
{
    int num;
    FILE *fp;
    fp=fopen("name.txt","w");
    printf("enter number");
    scanf("%d",&num);
    fprintf(fp,"%d",num);
    fclose(fp);
    
}