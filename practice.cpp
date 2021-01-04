// CPP program to illustrate 
// Implementation of push() function 
#include <iostream> 
#include <stack> 
using namespace std; 

int main() 
{ 
	// Empty stack 
	stack<int> mystack1;
    stack<int> mystack2; 
	mystack1.push(0); 
	mystack1.push(1); 
	mystack1.push(2); 
    mystack2.push(3);
    mystack2.push(4);
    mystack2.push(5);
    mystack1.swap(mystack2);	// Printing content of stack 
	while (!mystack1.empty()) { 
		cout << ' ' << mystack1.top(); 
		mystack1.pop(); 
	} cout<<endl;
    while (!mystack2.empty())
    {
        cout<<' '<<mystack2.top();
        mystack2.pop();
    }


    
} 
