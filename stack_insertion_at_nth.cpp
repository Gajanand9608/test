
/*  A c++ program to demonstrate to input and delete operation in stack using linked list*/


#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void push(node **head_ref, int new_data)
{
    node *temp;
    temp = new node();
    temp->data = new_data;
    temp->next = *head_ref;
    *head_ref = temp;
}
void append(node **head, int new_data)
{
    node *temp;
    node *last = *head;

    temp = new node;
    temp->data = new_data;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}
void insertat(node *pre_node, int new_data)
{
    if (pre_node == NULL)
    {
        cout << "the given previous node is empty";
        return;
    }

    node *temp;
    temp = new node;
    temp->data = new_data;
    temp->next = pre_node->next;
    pre_node->next = temp;
}
void delete_node(node **head_ref, int key)
{
    node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete (temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev=temp;
        temp=temp->next;

    }
    if(temp==NULL)
    {
        return ;

    }
    prev->next=temp->next;
    delete(temp);
}

void print(node *NODE)
{
    while (NODE != NULL)
    {
        cout << NODE->data << "   " << endl;
        NODE = NODE->next;
    }
}

int main()
{
    node *head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 8);
    insertat(head->next, 9);
    cout << "the given linked list";
    print(head);
    delete_node(&head,9);
    print(head);
    delete_node(&head,1);
    print(head);
    return 0;
}