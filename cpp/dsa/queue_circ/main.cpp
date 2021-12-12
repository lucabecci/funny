#include<bits/stdc++.h>
#include "Queue.h"

int main(int argc, char *argv[])
{
  Queue q(5);
  std::cout << "First print:" << std::endl;
  q.EnQueue(22);
  q.EnQueue(2);
  q.EnQueue(44);
  q.EnQueue(666);
  q.EnQueue(24);
  q.Display();
  int first_deleted = q.Dequeue();
  std::cout << "First deleted: " << first_deleted << std::endl;
  std::cout << "Second print:" << std::endl;
  q.Display();
  return 0;
}
