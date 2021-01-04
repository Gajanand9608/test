#include<stdio.h>
int gcd(int m,int n)
{ if(m==0)
return n;
if(n==0)
return m;
if(m==n)
return m;

    if(m>n)
    return gcd(m-n,n);
    else
    return gcd(m,n-m); 
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int hcf=gcd(a,b);
    printf("%d",hcf);
}