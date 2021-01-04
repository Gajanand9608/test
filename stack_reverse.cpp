#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
   // void push(node **, int);
    //void print(node *);
    //void reverse(node**);
};
void push(node **head_ref, int new_data)
{
    node *temp;
    temp = new node;
    temp->data = new_data;
    temp->next = *head_ref;
    *head_ref = temp;
}
void print(node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}
void reverse(node**head)
{
    node *current=*head;
    node *prev=NULL,*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;


}
    

int main()
{ 
    node *head;
    head = NULL;
    push(&head, 2);
    push(&head, 1);
    push(&head,7);
    print(head);
    
    reverse(&head);
    print(head);
    return 0;
}