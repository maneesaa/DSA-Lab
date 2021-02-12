//Singly Linked List at the given node

#include <iostream>
using namespace std;
 
struct Node
{
   int data;
   struct Node *next;
};

void insertFront(struct Node** head, int data)
{
    struct Node* newNode = new Node;
    newNode->data =data;
    newNode->next = (*head);
    *head = newNode;
}
 
void insertAfter(struct Node* prev_node, int data)
{
  if (prev_node == NULL)
{
    cout<<"The given previous node is required,cannot be NULL"; return; } 
    struct Node* newNode =new Node; 
    newNode->data = data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}
 
void insertEnd(struct Node** head, int data)
{
    struct Node* newNode = new Node;
    struct Node *last = *head; 
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
        last->next = newNode;
        return;
}
 

void displayList(struct Node *node)
{
   while (node != NULL)
   {
      cout<<node->data<<"->";
      node = node->next;
   }
 
    if(node== NULL)
      cout<<"null";
} 

int main() 
{ 
    struct Node* head = NULL;
    
    insertEnd(&head, 100); 
    insertFront(&head, 200); 
    insertFront(&head, 300); 
    insertEnd(&head, 400); 
    insertAfter(head->next,800);
    insertAfter(head->next, 500);
 
    cout<<"Final linked list: "<<endl;
    displayList(head);
    
    return 0;
}
