#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    f1=fopen("abc.txt","w");
    //f2=fopen("def.txt","w");
    fprintf(f1,"covid and economics crisis");
    fclose(f1);
    return 0;
    
}