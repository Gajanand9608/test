#include<stdio.h>
int swap(int a[],int n)
{
    int noofones=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        noofones++;

    }
    int x=noofones;
    int maxones=-20;
    int precount[2000];
    for(i=0;i<n;i++)
    {
        precount[i]=0;
    }    
        if(a[0]==1)
        precount[0]=1;
    for(i=1;i<n;i++)
    {
        if(a[i]==1)
        precount[i]=precount[i-1]+1;
       else
        precount[i]=precount[i-1];

    }
    for(i=x-1;i<n;i++)
    {
        if(i==(x-1))
        noofones=precount[i];
        else
       noofones=precount[i]-precount[i-x];
       if(maxones<noofones)
       maxones=noofones;
    }
    int noofzeroes=x-maxones;
    printf("%d",noofzeroes);   

return 0;
}
int main()
{
    int n,a[2000],i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    swap(a,n);
    return 0;
}