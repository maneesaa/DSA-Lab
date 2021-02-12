//Circular Queue 

#include<iostream>
#define MAX 5
using namespace std;

int array[MAX];
int front = -1;
int rear = -1;

int checkFull()
{
    if  (front == 0 && rear == MAX-1)
    {
        return 1;
    }
    return 0;
}


int checkEmpty()
{
    if (front == -1) 
    {
        return 1;
    }
  return 0;
}


void enqueue(int value)
{
    if (checkFull())
      cout<<"Overflow condition\n"<<endl;
    
    else
    {
        if (front == -1) 
            front = 0;
        
        rear = (rear + 1) % MAX;
        array[rear] = value;
        cout<<value<<"\tInserted in Queue"<<endl;
    }
}


int dequeue() {
    int variable;
    if (checkEmpty()) {
        cout<<"Underflow condition"<<endl;
        return -1;
    } 
    else
    {
        variable = array[front];
        if (front == rear) 
        {
            front = rear = -1;
        } 
    else 
    {
      front = (front + 1) % MAX;
    }
    cout<<variable<<"\tDeleted from Queue"<<endl;
    return 1;
  }
}


void display()
{
    int i;
    if (checkEmpty())
       cout<<"Nothing to dequeue"<<endl;
    else
    {
        cout<<"The circular queue looks like:"<<endl;
        for (i = front; i != rear; i = (i + 1) % MAX)
        {
            cout<<array[i]<<endl;
        }
            cout<<array[i];
    }
}

int main() 
{
  dequeue();
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);

  dequeue();
  dequeue();
  dequeue();

  enqueue(5);
  enqueue(6);
  display();

  return 0;
}