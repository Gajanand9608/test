#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node * newNode(int key)
{
    struct node *p=( struct node *)malloc(sizeof(struct node*));
    p->data=key;
    p->next=NULL;
    p->prev=NULL;
    return p;
}
int main()
{
    int n,m,dir,i;
    scanf("%d%d%d",&n,&m,&dir);
    struct node* head=newNode(1);
    struct node* temp=head;
    struct node* p=NULL;
    for(i=2;i<=n;i++)
    {
       temp->next=newNode(i);
        p=temp;
       temp=temp->next;
       temp->prev=p;
    }
    temp->next=head;
    head->prev=temp;
    if(dir==0)
    {
        int flag=n-1;
        while(flag--)
        {
            int k=m-1;
            while(k)
            {
                head=head->next;
                k--;
            }
            head=head->prev;
            p=head;
            head->next=head->next->next;
            head=head->next;
            head->prev=p;
        }
        printf("%d",head->data);
    }
    else if(dir==1)
    {
        int flag=n-1;
        while(flag--)
        {
            int k=m-1;
            while(k)
            {
                head=head->prev;
                k--;
            }
            head=head->next;
            p=head;
            head->prev=head->prev->prev;
            head=head->prev;
            head->next=p;
        }
        printf("%d",head->data);
    }

    
return 0;
}