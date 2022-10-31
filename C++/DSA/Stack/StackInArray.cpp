#include <iostream>
using namespace std;

class Stack
{
public:
   int top;

   int a[10];
   Stack()
   {
      top = -1;
   }

   void push(int x);
   int pop();
   bool isEmpty();
   bool isFull();
   void peek();
};

void Stack::peek()
{
   if (!isEmpty())
   {
      cout << a[top];
   }
}
void Stack::push(int x)
{
   if (!isFull())
   {
      a[++top] = x;
      cout << "Element Inserted is " << x << endl;
   }
   else
   {
      cout << "Stack Overflow \n";
   }
}
int Stack::pop()
{
   if (isEmpty())
   {
      cout << "Stack Underflow \n";
      return 0;
   }
   else
   {
      int d = a[top--];
      cout << "Element poped is " << d << endl;
      return d;
   }
}
bool Stack::isFull()
{
   if (top == 9)
   {
      return true;
   }
   else
      return false;
}

bool Stack::isEmpty()
{
   if (top < 0)
   {
     return true;
   }
   else
   {
      return false;
   }
}

int main()
{

   Stack stack;
   stack.push(4);
   stack.push(5);

   stack.peek();
   stack.pop();
}