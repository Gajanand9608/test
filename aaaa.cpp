#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,j,a;
    int arr[10][10];
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
    cin>>a;
    for(j=0;j<a;j++)
    {
        cin>>arr[i][j];
    }
    }  
     for(int k=0;k<q;k++)
     {
         cin>>i>>j;
         cout<<arr[i][j]<<endl;
     }
      
    return 0;
}