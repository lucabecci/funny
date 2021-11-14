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
    void InsertAfter(Node* prev, int data);
    void ForwardPrint(Node* head);
    void ReversePrint(Node* head);
    void RemoveOne(Node* head, int data);
    void Reverse(Node** head);
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

void LL::InsertAfter(Node* prev, int data)
{
  if(prev == NULL)
  {
    std::cout << "ERROR! the prev node is null" << std::endl;
    return;
  }

  Node* new_node = new Node();

  new_node->data = data;
  new_node->next = prev->next;

  prev->next = new_node;
  
  new_node->prev = prev;

  if(new_node->next == NULL)
  {
    new_node->next->prev = new_node;
  }
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

void LL::ReversePrint(Node* head)
{
  Node* last;
  while(head != NULL)
  {
    last = head;
    head = head->next;
  }

  while(last != NULL)
  {
    std::cout << last->data << std::endl;
    last = last->prev;
  }
}


void LL::RemoveOne(Node* head, int data)
{
  while(head != NULL)
  {
    if(head->data == data)
    {
      std::cout << "Deleting the value " << head->data << std::endl;
      head->next->prev = head->prev;
      head->prev->next = head->next;
      return;  
    }
    head = head->next;
  }
  std::cout << "ERROR! " << data << " not found" << std::endl;
}

void LL::Reverse(Node** head)
{
  Node *t = NULL;
  Node *current = *head;

  while(current != NULL)
  {
    t = current->prev;
    current->prev = current->next;
    current->next = t;
    current = current->prev;
  }

  if(t != NULL)
  {
    *head = t->prev;
  }
}
#endif
