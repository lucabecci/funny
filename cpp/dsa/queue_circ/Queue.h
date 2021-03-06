#include<bits/stdc++.h>

class Queue 
{
  private:
    int rear, front;
    int size;
    int *arr;
  public:
    Queue(int length);
    void EnQueue(int n);
    int Dequeue(void);
    void Display(void);
};

Queue::Queue(int length)
{
  front = rear = -1;
  size = length;
  arr = new int[length];
}

void Queue::EnQueue(int n)
{
  if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1)))
  {
    std::cout << "Queue is full" << std::endl;
    return;
  }
  else if(front == -1)
  {
    front = rear = 0;
    arr[rear] = n;
  }
  else if(rear == size - 1 && front != 0)
  {
    rear = 0;
    arr[rear] = n;
  }
  else
  {
    rear++;
    arr[rear] = n;
  }
}

int Queue::Dequeue()
{
  if(front == -1)
  {
    std::cout << "Queue is empty" << std::endl;
    return INT_MIN;
  }

  int data = arr[front];
  arr[front] = -1;
  if(front == rear)
  {
    front = -1;
    rear = -1;
  }
  else if(front == size - 1)
    front = 0;
  else
    front++;

  return data;
}

void Queue::Display(void)
{
  if(front == -1)
  {
    std::cout << "Queue is empty" << std::endl;
    return;
  }
  std::cout << "Elements in circular queue:" << std::endl;
  if(rear >= front)
  {
    for(int i = front; i <= rear; i++)
    {
      std::cout << arr[i] << std::endl;
    }
  }
  else
  {
    for(int i = front; i < size; i++)
      std::cout << arr[i] << std::endl;
    for(int i = 0; i <= rear; i++)
      std::cout << arr[i] << std::endl;
  }
}
