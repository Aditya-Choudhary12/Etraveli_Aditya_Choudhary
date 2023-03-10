#include <bits/stdc++.h>
using namespace std; 

/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
};   
/* Function to get the Nth node from the last of a linked list*/
void printNthFromLast(struct Node* head, int N) 
{ 
    static int i = 0; 
    if (head == NULL) 
    { 
        return; 
    }
    printNthFromLast(head->next, N); 

    if (++i == N) 
    {
        cout<<head->data; 
    }
} 
void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = new Node(); 
    /* put in the data */
    new_node->data = new_data; 
    /* link the old list of the new node */
    new_node->next = (*head_ref); 
    /* move the head to point to the new node */
    (*head_ref) = new_node; 
} 
int main() 
{
    /* Start with the empty list */
    struct Node* head = NULL; 
    // create linked 35->15->4->20
    push(&head, 20);
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 35); 
    printNthFromLast(head, 4); 
    return 0; 
}
