#include <iostream>

class Node
{
  public:
    int val;
    Node * next;

    Node(int initialVal)
    {
      val=initialVal;
      next=nullptr;
    }
};

//iterative worked
int sumList(Node * head)
{
  int sum = 0;
  Node * current=head;
  while(current!=nullptr)
  {
    sum+=current->val;
    current=current->next;
  }
  return sum;
}

int main() 
{
  Node a(2);
  Node b(8);
  Node c(3);
  Node d(-1);
  Node e(7);
  
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  std::cout<<sumList(&a);
  return 0;
}