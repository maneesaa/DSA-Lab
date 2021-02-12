//Linear Queue uing Array

#include <iostream>
using namespace std;
#define MAX 5
class Queue
{
    private:
        int front,rear;
        int array[MAX];
    public:
        Queue()
        {
            front = 0;
            rear  = -1;
        }
 
        int  isFull();
        int  isEmpty();
        void enqueue(int  item);
        int  dequeue(int *item);
};
 
int Queue::isFull()
{
    int full = 0 ;
 
    if( rear == MAX-1 )
        full = 1;
 
    return full;
}
 
int Queue::isEmpty()
{
    int empty = 0 ;
 
    if( front == rear + 1 )
        empty = 1;
 
    return empty;
}

void Queue:: enqueue(int item)
{
    if( isFull() )
    {
        cout<<"\nQueue OverFlow" << endl;
        return;
    }   
 
    array[++rear]=item;
    cout<<"\ninserted Value :" << item;
}
 
int Queue:: dequeue(int *item)
{
    if( isEmpty() )
    {
        cout<<"\nQueue Underflow" << endl;
        return -1;
    }
 
    *item = array[front++];
    return 0;
}
 
int main()
{
    int item=0;
 
    Queue q = Queue();
 
    q.enqueue(11);
    q.enqueue(22);
    q.enqueue(33);
    q.enqueue(44);
    q.enqueue(55);
    q.enqueue(66);  
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    if(q.dequeue( &item)==0)    
        cout<<"\nDeleted item : "<< item;
 
    cout<< endl;
    return 0;
}



