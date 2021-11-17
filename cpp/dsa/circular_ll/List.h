#ifndef LIST_H
#define LIST_H

#include<bits/stdc++.h>
#include "Node.h"

class List
{
  private:
    Node* head;

  public:
    List(int data);
    Node* Get(void);
    void Push(Node** head, int data);
    void ForwardPrint(Node* head);
    void ReversePrint(Node* head);
};

List::List(int data)
{
  Node* tempH = new Node();
  tempH->data = data;
  tempH->next = tempH;
  head = tempH;
}

Node* List::Get(void)
{
  return head;
}


void List::Push(Node** head, int data)
{
  Node* node = new Node();
  Node* temp = *head;
  node->data = data;
  node->next = *head;
  
  while(temp->next != *head)
  {
    temp = temp->next; 
  }
  temp->next = node;
  *head = node;
}

void List::ForwardPrint(Node* head)
{
  Node *temp = head;
  if(head != NULL)
  {
    do
    {
      std::cout << "Value:" << temp->data << std::endl;
      temp = temp->next;
    }
    while(temp != head);
  }
}

#endif

