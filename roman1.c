#include <stdio.h> 
int roman(char a[],int c)
{

int i;int s=0;
int b[c];
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='I'||a[i]=='i')
    b[i]=1;
    else if(a[i]=='V'||a[i]=='v')
    b[i]=5;
    else if(a[i]=='X'||a[i]=='x')
    b[i]=10;
   else if(a[i]=='L'||a[i]=='l')
    b[i]=50;
    else if(a[i]=='C'||a[i]=='c')
    b[i]=100;
    else if(a[i]=='D'||a[i]=='d')
    b[i]=500;
    else 
    b[i]=1000;

}
s=s+b[c-1];
//printf("%d",s);
for(i=c-1;i>=1;i--)
{
    if(b[i-1]>=b[i])
    s+=b[i-1];
    else
    s-=b[i-1];
    
}
printf("%d",s);
return 0; 
} 

int main() 
{ char a[40];
int c=0,i=0,s=0;
scanf("%[^\n]s",a);
while(a[i]!='\0')
{
    c++;
    i++;
}
//printf("%d",c);
//printf("%s",a);
roman( a,c);
return 0;
}

