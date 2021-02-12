#include <iostream>
using namespace std;


struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};


void insert_front (struct Node **head, int data)
{
    struct Node *newNode = new Node;
    newNode->data = data;
    newNode->next = (*head);
    newNode->prev = NULL;
    
    if ((*head) != NULL)
        (*head)->prev = newNode;
        (*head) = newNode;
}

void insert_end (struct Node **head, int data)
{
    struct Node *newNode = new Node;
    struct Node *last = *head;	
    newNode->data = data;
    newNode->next = NULL;
   
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;
        last->next = newNode;
        newNode->prev = last;
        return;
}

void display(struct Node *node)
{
    struct Node *last;
    
    while (node != NULL)
    {
       cout << node->data << "-";
       last = node;
       node = node->next;
    }
    
    if (node == NULL)
        cout << "NULL";
}

int main ()
{  
    struct Node *head = NULL;
    insert_end (&head, 400);
    insert_front (&head, 300);
    insert_front (&head, 200);
    insert_end (&head, 500);
    insert_end(&head,600);
    
    cout << "Doubly linked list is: " << endl;
    display(head);
    return 0;
}
