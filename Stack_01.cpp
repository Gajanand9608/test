#include <bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    node *next;

    node *top = NULL;
    void push(int newdata)
    {
        node *temp = new node;
        temp->data = newdata;
        temp->next = top;
        top = temp;
        cout << temp->data << "pushed to stack" << endl;
    }
    void pop()
    {
        node *temp = top;
        top = top->next;
        int popped = temp->data;
        free(temp);
        cout << popped << "  is the popped element "<<endl;
    }
    void peek()
    {
        cout<<top->data<<endl;
    }
    
};

int main()
{

    node n;
    n.push(1);
    n.push(2);
    n.push(3);
    n.pop();
    n.peek();
    //n.pop();
    return 0;
}