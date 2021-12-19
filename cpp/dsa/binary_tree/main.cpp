#include<bits/stdc++.h>

struct Node
{
  int data;
  Node* left;
  Node* right;
};

Node* CreateNode(int data)
{
  Node* node = new Node();
  if(!node)
  {
    std::cout << "Memory error" << std::endl;
    return NULL;
  }
  node->data = data;
  node->left = node->right = NULL;
  return node;
}

Node* InsertNode(Node* root, int data)
{
  if(root == NULL)
  {
    root = CreateNode(data);
    return root;
  }
  std::queue<Node*> q;
  q.push(root);

  while(!q.empty())
  {
    Node* temp = q.front();
    q.pop();

    if(temp->left != NULL)
    {
      q.push(temp->left);
    }
    else 
    {
      temp->left = CreateNode(data);
      return root;
    }

    if(temp->right != NULL)
    {
      q.push(temp->right);
    }
    else
    {
      temp->right = CreateNode(data);
      return root;
    }
  }
}

void InOrder(Node* temp)
{
  if(temp == NULL)
  {
    return;
  }
  InOrder(temp->left);
  std::cout << temp->data << " ";
  InOrder(temp->right);
}

int main(int argc, char *argv[])
{
  Node* root = CreateNode(0);
  root->left = CreateNode(1);
  root->right = CreateNode(2);
  root->left->left = CreateNode(3);
  root->left->right = CreateNode(4);
  root->right->left = CreateNode(5);
  root->right->right = CreateNode(6);
  InOrder(root);
  std::cout << "" << std::endl;
  int v = 7;
  root = InsertNode(root, v);
  InOrder(root);
  std::cout << "" << std::endl;
  int v2 = 8;
  root = InsertNode(root, v2);
  InOrder(root);
  return 0;
}
