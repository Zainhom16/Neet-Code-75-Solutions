class NodeList
{
  public int value;
  NodeList next;

  public NodeList(int val)
  {
    value = val;
    next = null;
  }
}

// class LinkedQueue 
// {
//   NodeList front;
//   NodeList rear;

//   public LinkedQueue()
//   {
//     front = rear = null;
//   }

//   void Enqueue(int value)
//   {
//     NodeList temp = new(value);
//     if (rear == null)
//     {
//       front = rear = temp;
//       return;
//     }
//     rear.next = temp;
//     rear = temp;
//   }

//   void Dequeue()
//   {
//     if (front == null)
//     {
//       Console.WriteLine("Queue Underflow...");
//       return;
//     }
//     front = front.next;
//     if (front == null)
//       rear = null;
//   }

//   int Peak()
//   {
//     if (rear == null)
//       return -1;

//     return front.value;
//   }
  
//   bool IsEmpty()
//   {
//     return front == null;
//   }
// }


// class CircularQueue
// {
//   private int size;
//   private 
// }

class Stakc()
{
  NodeList top;

  Stack()
  {
    top = null;
  }

  void Push(int value)
  {
    NodeList temp = new(value);
    temp.next = top;
    top = temp;
  }
  
  void Pop()
  {
    if (top == null) return;
    top = top.next;
  }
}