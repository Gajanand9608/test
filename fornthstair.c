#include<stdio.h>
int stair(int s)
{
    if(s<=1)
     return s;

  return stair(s-1)+stair(s-2);
}
int countways(int n)
{
    return stair(n+1);
}
int main()
{
    int m;
    scanf("%d",&m);
    printf("no. of ways = %d",countways(m));
    
    return 0;

}
