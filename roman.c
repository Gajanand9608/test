#include<stdio.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    char a[40];
    while(i<=n)
    {
        scanf("%c",&a[i]);
        i++;
    }
    printf("%s",a);
    return 0;
}