#include<bits/stdc++.h>

using namespace std;

class StackNode 
{
  public:
    int data;
    StackNode* next;
};

class ProcessStackLL
{
  public:
    StackNode* newNode(int data)
    {
      StackNode* stackNode = new StackNode();
      stackNode->data = data;
      stackNode->next = NULL;
      return stackNode;
    }
    int isEmpty(StackNode* root)
    {
      return !root;
    }
    void push(StackNode** root, int data)
    {
      StackNode* stackNode = newNode(data);
      stackNode->next = *root;
      *root = stackNode;
      std::cout << data << " pushed into stack" << std::endl;
    }
    int pop(StackNode** root)
    {
      if( isEmpty(*root) )
      {
        return INT_MIN;
      }
      StackNode* temp = *root;
      *root = (*root)->next;
      int popped = temp->data;
      free(temp);

      return popped;
    }

    int peek(StackNode* root)
    {
      if(isEmpty(root))
      {
        return INT_MIN;
      }
      return root->data;
    }
};



int main(int argc, char *argv[])
{
  StackNode* root = NULL;
  ProcessStackLL sll;
  sll.push(&root, 200);
  sll.push(&root, 3030);
  sll.push(&root, 1);
  

  int popped = sll.pop(&root);
  std::cout << popped << " deleted of the ll stack" << std::endl;
  std::cout << "Top element is: " << sll.peek(root) << std::endl;

  while(!sll.isEmpty(root))
  {
    std::cout << sll.peek(root) << std::endl;
    sll.pop(&root);
  }
  return 0;
}
