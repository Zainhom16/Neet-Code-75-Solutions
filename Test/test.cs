// class NodeList
// {
//   public int value;
//   NodeList next;

//   public NodeList(int val)
//   {
//     value = val;
//     next = null;
//   }
// }

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

// class Stakc()
// {
//   NodeList top;

//   Stack()
//   {
//     top = null;
//   }

//   void Push(int value)
//   {
//     NodeList temp = new(value);
//     temp.next = top;
//     top = temp;
//   }

//   void Pop()
//   {
//     if (top == null) return;
//     top = top.next;
//   }
// }

class Node
{
  public int value;
  public Node left;
  public Node right;

  public Node(int value)
  {
    this.value = value;
    left = right = null;
  }


  public BFS (Node x)
  {
    if (x == null) return;
    Queue<Node> q= new();
    q.Enqueue(x);

    while (q.Count != 0)
    {
      Node front = q.Dequeue();
      Console.WriteLine($"{front.value}");
      if (front.left!=null) q.Enqueue(front.left);
      if (front.right!=null) q.Enqueue(front.right);
    } 
  }
}

