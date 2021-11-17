#include<bits/stdc++.h>
#include "List.h"
#include "Node.h"
int main(int argc, char* argv[])
{
  List cll(33);
  Node* h = cll.Get();
  cll.Push(&h, 3000);
  cll.Push(&h, 202);
  cll.ForwardPrint(h);
}
