#include<stdio.h>
int main()
{
    int m,n,i,j,c=0, a[100],b[100];
    printf("enter the values of m and n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {   
        for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            c++;
            
        }
    }
    if(c==n)
    printf("1");
    else
     printf("0");
     return 0;
}