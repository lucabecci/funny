#include<bits/stdc++.h>
#include "LL.h"
#include "Node.h"

int main(int argc, char *argv[])
{
  LL dll(12);
  Node* head = dll.Get();
  dll.Append(&head, 22);  
  dll.Append(&head, 330);
  dll.ForwardPrint(head); 
  return 0;
}
