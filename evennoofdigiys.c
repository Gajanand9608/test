#include<stdio.h>
int evenno(int a[],int n)
{int i,d=0;
    for(i=0;i<n;i++)
{
    int c=0;
   while(a[i]>0)
   {
       a[i]/=10;
       c++;
   }
   if(c%2==0)
   d++;
}
return d;


}

int main()
{
    int i,n,a[100];
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int p=evenno(a,n);
printf("%d",p);
return 0;
}
    