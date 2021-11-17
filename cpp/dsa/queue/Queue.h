#ifndef QUEUE_H
#define QUEUE_H

#include<bits/stdc++.h>

class Queue
{
  private:
    int front, rear, size;
    int capacity;
    int* array;
    int isFull()
    {
      return (size == capacity);
    };
    int isEmpty()
    {
      return (size == 0);
    };
  public:
    Queue(int capacity);
    void Enqueue(int data);
    void Dequeue();
    int Front();
    int Rear();
};

Queue::Queue(int c)
{
  capacity = c;
  front = size = 0;

  rear = capacity - 1;
  array = new int[capacity];
}

void Queue::Enqueue(int data)
{
  if(isFull())
  {
    std::cout << "The queue is full" << std::endl;
    return;
  }
  rear = (rear + 1) % capacity;
  array[rear] = data;
  size = size + 1;
  std::cout << data << " enqueued" << std::endl;
};

void Queue::Dequeue()
{
  if(isEmpty())
  {
    std::cout << "The queue is empty" << std::endl;
    return;
  }
  int item = array[front];
  front = (front + 1) % capacity;
  size = size - 1;
  std::cout << item << " dequeued" << std::endl;
};

int Queue::Front()
{
  if(isEmpty())
    return INT_MIN;
  return array[front];
}

int Queue::Rear()
{
  if(isEmpty())
    return INT_MIN;
  return array[rear];
}
#endif

