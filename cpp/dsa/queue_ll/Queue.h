#include<bits/stdc++.h>
#include "Qnode.h"

class Queue
{
  private:
    Qnode* q; 
    Qnode* front; 
    Qnode* rear;

  public:
    Queue(void);
    void Enqueue(int data);
    int Dequeue(void);
};


Queue::Queue(void)
{
  front = rear = NULL;
}

void Queue::Enqueue(int data)
{
  Qnode* temp = new Qnode(data);
  if(rear == NULL) //if the back is null
  {
    front = rear = temp;
    return;
  }
  //assign the temp in the next of the rear and move the rear to the temp
  rear->next = temp;
  rear = temp;
}
