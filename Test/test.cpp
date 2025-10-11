#include <iostream>
#include <vector>
#include <algorithm>
#define SIZE 100
#include <stack>
using namespace std;

// class Queue
// {
// private:
//   int arr[SIZE];
//   int front;
//   int rear;

// public:
//   Queue()
//   {
//     front = 0;
//     rear = -1;
//   };

//   void Enqueue(int value)
//   {
//     if (rear >= SIZE - 1)
//     {
//       cout << "Queue Overflow" << endl;
//       return;
//     }
//     arr[++rear] = value;
//   };

//   void Dequeue()
//   {
//     if (front > rear)
//     {
//       cout << "Queue Overflow" << endl;
//       return;
//     }
//     front++;
//   }

//   int peak()
//   {
//     if (front > rear)
//     {
//       cout << "Queue Overflow" << endl;
//       return -1;
//     }
//     return arr[front];
//   }

//   bool IsEmpty()
//   {
//     return front > rear;
//   }
// };

// class CircularQueue
// {
// private:
//   int size;
//   int front;
//   int rear;
//   int *arr;

// public:
//   CircularQueue(int k)
//   {
//     size = k;
//     arr = new int[k];
//     front = -1;
//     rear = -1;
//   }

//   bool Enqueue(int value)
//   {
//     if ((rear + 1) % size == front)
//       return false;

//     if (front == -1)
//       front = 0;

//     rear = (rear + 1) % size;
//     arr[rear] = value;
//     return true;
//   }

//   bool Dequeue()
//   {
//     if (front == -1)
//       return false;

//     if (front == rear)
//     {
//       front = rear = -1;
//     }
//     else
//     {

//       front = (front + 1) % size;
//     }

//     return true;
//   }
// };

// class Stack
// {
// private:
//   int top;
//   int arr[SIZE];

// public:
//   Stack()
//   {
//     top = -1;
//   }

//   void Push(int value)
//   {
//     if (top + 1 >= SIZE)
//       return;

//     arr[++top] = value;
//   }

//   void Pop()
//   {
//     if (top < 0)
//       return;
//     top--;
//   }
// };

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;
    for (char c : s)
    {
      if (c == '(' || c == '{' || c == '[')
      {
        st.push(c);
      }
      else if (c == ')' || c == '}' || c == ']')
      {
        if (st.empty())
          return false;

        char top = st.top();
        if (c == '(' && top != ')' ||
            c == '{' && top != '}' ||
            c == '[' && top != ']')
        {
          return false;
        }

        st.pop();
      }
    }

    return st.empty();
  }
};

int main()
{
}