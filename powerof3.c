#include<stdio.h>
int check(int n)
{
   if(n>0)
   {while(n%3==0)
   {
       n=n/3;
       
   }
   if(n==1)
   printf("truen");
   }

   if(n==0||n!=1)
   printf("false");
   return 0;
}
int main()
{
    int n;
    
    printf("Enter a number");
    scanf("%d",&n);
    check(n);
    
return 0;
}