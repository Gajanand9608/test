#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char  a[100];int result; 
    scanf("%[^\n]s",a);
    int i=0;int d=0;
    int c=0;int j=0;
    while(a[i]!='\0')
    {
        c++;
        i++;
    }
    char b[c];
    for(i=0;i<c;i++)
    {
        if(isalpha(a[i]))
        {
            b[j]=a[i];
            j++;
        }
         if(a[i]==' ')
            { 
                b[j]=a[i];
                j++;
            }
          }
   
   printf("%s",b);
    int k=0;
   printf("\n");
    while(b[k]!='\0')
    {
        d++;
        k++;

    }
   // printf("%d",d);
   // printf("\n");
    for(i=d-1;i>=0;i--)
	{
		if(b[i]==' ')
		{
            for(j=i+1;b[j]!='\0';j++)
			{
				printf("%c",b[j]);
				
			}
			printf(" ");
			b[i]='\0';
		}
    }
    for(i=0;b[i]!='\0';i++)
	{

		printf("%c",b[i]);
	}
	return 0;

}
