#include<stdio.h>
int checkprime(int n)
{
  int i,c=0;
  for(i=2;i<=n;i++)
  {
    if((n%i)==0)
    c++;
  }
  if(c==1)
  return 1;
  else
   return 0;

}
int main()
{
  int m;int flag=0;
  scanf("%d",&m);
  int j;
  for(j=2;j<=m/2;j++)
  {
    if(checkprime(j)==1)
    {
      if(checkprime(m-j)==1)
      {
        flag=1;

      }
    }
  }
  if(flag==1)
  printf("yes");
  else
   printf("no");

  return 0;
}