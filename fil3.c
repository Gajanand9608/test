#include<stdio.h>
int maxsumarray(int a[],int n)
{
    int i;
    int sumfinal=a[0];
    int sum1=a[0];
    for(i=1;i<n;i++)
    {
        sum1=sum1+a[i];
        if(sum1>sumfinal)
        {
            sumfinal=sum1;

        }
        else if(sum1<0)
        sum1=0;
        
    }
    printf("sum =%d",sumfinal );
    return 0;
}
int main()
{
    int n,i,a[4000];
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    maxsumarray(a,n);
    return 0;

}