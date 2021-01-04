#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int front=0, back=0;
    int c;
    int k=n;
    while(n>0)
    {//
        c=n%10;
        front=(n%100)/10;
        if((front+1)==c||(front-1)==c)
        {
            n=n/10;
            
            if(n==0)
            cout<<"YES  "<<k;
        }
        else
        {cout<<"NO";
            break;
        }
        

    }
    return 0;
}