#include<stdio.h>



int increment(int b[],int n)
{  
    int i,carry=0;
    b[n-1]+=1;
    carry=b[n-1]/10;
    b[n-1]=b[n-1]%10;
    for(i=n-2;i>=0;i--)
    { if (carry==1)
    {

        b[i]+=1;
        carry=b[i]/10;
        b[i]=b[i]%10;
    }
    }
    
   if(b[0]==0)
   {
       printf("%d",1);
      // printf("\n");
       
    
       for(i=0;i<n;i++)
   {
       printf("%d",b[i]);
       //printf("\n");
       }
   }
   else
   { for(i=0;i<n;i++)
   {
       printf("%d",b[i]);}
       
   }
   
       

   
   return 0;
}

int main()
{
    int n,i,a[5];
    scanf("%d",&n);
   printf("enter array");
   for(i=0;i<n;i++)
   { 
   scanf("%d",&a[i]);
   }
   increment( a, n);
   
   
   return 0;
}