#include<bits/stdc++.h>
#include "LL.h"
#include "Node.h"

int main(int argc, char *argv[])
{
  LL dll(12);
  Node* head = dll.Get();
  dll.Append(&head, 22);  
  dll.Append(&head, 330);
  dll.InsertAfter(head->next, 3000);
  std::cout << "Forward Print:" << std::endl;
  dll.ForwardPrint(head); 
  std::cout << "Pushing 444 into double linked list" << std::endl;
  dll.Push(&head, 444);
  std::cout << "Reverse Print:" << std::endl;
  dll.ReversePrint(head);
  return 0;
}
