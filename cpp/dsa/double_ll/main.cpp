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
  std::cout << "Reversing the dll" << std::endl;
  dll.Reverse(&head);
  dll.ForwardPrint(head);
  return 0;
}
