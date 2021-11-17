#include<bits/stdc++.h>
#include<cassert>
#include "Queue.h"

int main(int argc, char* argv[])
{
  Queue q(5);
  q.Enqueue(55);
  q.Enqueue(21);
  int temp = q.Front(); 
  assert(temp == 55);
  temp = q.Rear();
  assert(temp == 21);
  q.Dequeue();
  q.Dequeue();
  q.Dequeue();
}
