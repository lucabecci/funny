#ifndef LL_H
#define LL_H
#include<bits/stdc++.h>
#include "Node.h"

class LL {
  private:
    Node* head;
  public:
    LL(int new_data);
    Node* Get(void);
    void Push(Node** head, int data);
    void Append(Node** head, int data);
    void ForwardPrint(Node* node);
};

LL::LL(int new_data)
{
  Node* h = new Node();
  h->data = new_data;
  head = h;
}

Node* LL::Get(void)
{
  return head;
}

void LL::Push(Node** head, int data)
{
  Node* new_node = new Node();
  new_node->data = data;
  
  new_node->next = (*head);
  new_node->prev = NULL;

  if((*head) != NULL)
  {
    (*head)->prev = new_node;
  }

  (*head) = new_node; 
}


void LL::Append(Node** head, int data)
{
  Node* new_node = new Node();
  Node* last = *head;

  new_node->data = data;
  new_node->next = NULL;

  
  if(*head == NULL)
  {
    new_node->prev = NULL;
    *head = new_node;
    return;
  }

  while(last->next != NULL)
  {
    last = last->next;
  }

  last->next = new_node;
  new_node->prev = last;

  return;
}

void LL::ForwardPrint(Node* head)
{
  std::cout << "Traversal forward direction" << std::endl;

  while(head != NULL)
  {
    std::cout <<  head->data << std::endl;
    head = head->next;
  }
}
#endif
