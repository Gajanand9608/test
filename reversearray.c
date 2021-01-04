#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int i=0;int j;
	//scanf("%[^\n]s",a);
gets(a);int c=0;
	//printf("%s\n",a);
	while(a[i]!='\0')
	{
		c++;
		i++;
	}
	//printf("%d",c);
	for(i=c-1;i>=0;i--)
	{
		if(a[i]==' ')
		{
            for(j=i+1;a[j]!='\0';j++)
			{
				printf("%c",a[j]);
				
			}
			printf(" ");
			a[i]='\0';
		}
	}
	for(i=0;a[i]!='\0';i++)
	{

		printf("%c",a[i]);
	}
	return 0;

}