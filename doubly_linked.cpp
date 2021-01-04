#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
void push(node **head_ref, int new_data)
{
    node *temp = new node;
    temp->data = new_data;
    temp->next = *head_ref;
    temp->prev = NULL;
    if ((*head_ref) !=  NULL)
        (*head_ref)->prev = temp;

    *head_ref = temp;
}
void InsertAfter(node *prev_node, int new_data)
{
    if(prev_node==NULL)
    {cout<<"the given prev node cannot be NULL";}
    node  *temp=new node;
    temp->data=new_data;
    temp->next=prev_node->next;
   prev_node->next=temp; 
   temp->prev=prev_node;
   if(temp->next!=NULL)
   temp->next->prev=temp;
}
void InsertEnd(node ** head_ref,int new_data)
{
     node *temp=new node;
     node *last=*head_ref;
      temp->data=new_data;
      temp->next=NULL;
      if(*head_ref==NULL)
      {
          temp->prev=NULL;
          *head_ref=temp;
          return ;
      }
      while(last->next!=NULL)
      {
          last=last->next;
      }
      last->next=temp;
      temp->prev=last;
      //return ;
}
void print(node* NODE)
{
    //node *temp=head;
    while(NODE!=NULL)
    {
        cout<<NODE->data<<" ";
        NODE=NODE->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    push(&head,8);
    push(&head,16);
    push(&head,24);
    print(head);
    InsertEnd(&head,32);
    InsertAfter(head,40);
    print(head);
}