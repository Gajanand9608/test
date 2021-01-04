// Iterative C++ program to reverse 
// a linked list 
#include <iostream> 
using namespace std; 


struct Node { 
	Node* head=NULL; 

    int data;
    Node *next;

	/* Function to reverse the linked list */
	void reverse() 
	{ 
		// Initialize current, previous and 
		// next pointers 
		Node* current = head; 
		Node *prev = NULL, *next = NULL; 

		while (current != NULL) { 
			// Store next 
			next = current->next; 

			// Reverse current node's pointer 
			current->next = prev; 

			// Move pointers one position ahead. 
			prev = current; 
			current = next; 
		} 
		head = prev; 
	} 
  void delete_AT(int key)
  {
      Node *temp = head, *prev;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
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



  	/* Function to print linked list */
	void print() 
	{ 
		 Node* temp = head; 
		while (temp != NULL) { 
			cout << temp->data << " "; 
			temp = temp->next; 
		} 
        cout<<endl;
	} 

	void push(int new_data) 
	{ 
		Node* temp = new Node;
         temp->data=new_data;
		temp->next = head; 
		head = temp; 
	} 
}; 

/* Driver program to test above function*/
int main() 
{ 
	/* Start with the empty list */
   Node ll; 
	ll.push(20); 
	ll.push(4); 
	ll.push(15); 
	ll.push(85); 

	cout << "Given linked list\n"; 
	ll.print(); 

	ll.reverse(); 

	cout << "\nReversed Linked list \n"; 
	ll.print();
    ll.delete_AT(15);
    ll.print(); 
    ll.delete_AT(85);
    ll.delete_AT(20);
    ll.print();
	return 0; 
} 
