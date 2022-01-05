   #include <iostream>
   using namespace std;

   class Stack
   {
      int top;

   public:
      int a[10];
      Stack()
      {
         top = -1;
      }
      void push(int x);
      int pop();
      void isEmpty();
      bool isFull();
   };

   void Stack::push(int x)
   {
      if (!isFull())
      {
         top = top + 1;
         a[top] = x;
         cout << "Element Inserted is " << x << endl;
      }
      else
      {
         cout << "Stack Overflow \n";
      }
   }
   int Stack::pop()
   {
      if (top < 0)
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
      if (top >= 0)
      {
         return true;
      }
      else
         return false;
   }

   void Stack::isEmpty()
   {
      if (top < 0)
      {
         cout << "Stack is empty \n";
      }
      else
      {
         cout << "Stack is not empty \n";
      }
   }

   int main()
   {

      Stack stack;
      stack.push(4);
   }