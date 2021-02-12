//Stack using Array
#include<iostream>
using namespace std;
#define MAX 10
class Stack
{
   int top;
   
   public:
   int stack[MAX]; 
  
   Stack() 
   { 
       top = -1; 
   }
   bool push(int x);
   int pop();
   int peek();
   bool Empty();
};
   bool Stack::push(int x)
   {
     if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        stack[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
  

    int Stack::pop()
{
      if (top < 0) 
      {
        cout<<"Stack Underflow!!"<<endl;
        return 0;
      } 
      else 
      {
        int item = stack[top--];
        return item;
      }
}

int Stack::peek()
{
      if (top < 0) 
      {
        cout << "Stack is Empty";
        return 0;
      }
      else 
      {
        int x = stack[top];
        return x;
      }
}
  

bool Stack::Empty()
{
   return (top < 0);
}
  

int main()
{
   class Stack a;
   cout<<"The Stack Push:"<<endl;
   a.push(11);
   a.push(42);
   a.push(61);
   a.push(33);
   cout<<"The Stack Pop: "<<endl;
   while(!a.Empty())
   {
       cout<<a.pop()<<"poped from stack"<<endl;
       
   }
   return 0;
}
