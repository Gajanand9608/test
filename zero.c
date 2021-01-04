#include<stdio.h>
int zero(int p)
{int c=0;
    while(p!=0)
    {
        if(p%2==0)
   {         p/=2;
        c++;}
        else
            {p=p-1;
           c++;}

    }
return c;
}
int main()
{
    int n,c=0;
    printf("enter a number");
    scanf("%d",&n);
    int p=zero(n);
   printf("number of steps %d",p);
    return 0;
}