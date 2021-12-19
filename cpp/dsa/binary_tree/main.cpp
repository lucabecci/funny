#include<bits/stdc++.h>
#include <iterator>

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

Node* Deletion(Node* root, int key)
{
  if(root == NULL)
  {
    return NULL;
  }
  if(root->left == NULL && root->right == NULL)
  {
    if(root->data == key)
    {
      return NULL;
    }
    else
    {
      return root;
    }
  }
  Node* key_node = NULL;
  Node* temp;
  Node* last;
  std::queue<Node*> q;
  q.push(root);

  while(!q.empty())
  {
    temp = q.front();
    q.pop();
    if(temp->data == key)
    {
      key_node = temp;
    }

    if(temp->left)
    {
      last = temp;
      q.push(temp->left);
    }

    if(temp->right)
    {
      last = temp;
      q.push(temp->right);
    }
  }
  if(key_node != NULL)
  {
    key_node->data = temp->data;
    if(last->right == temp)
    {
      last->right = NULL;
    }
    else
    {
      last->left = NULL;
    }
    delete(temp);
  }
  return root;
 
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

  struct Node* root = CreateNode(10);
  root->left = CreateNode(11);
  root->left->left = CreateNode(7);
  root->left->right = CreateNode(12);
  root->right = CreateNode(9);
  root->right->left = CreateNode(15);
  root->right->right = CreateNode(8);

  std::cout << "Inorder traversal before deletion : ";
  InOrder(root);

  int key = 7;
  root = Deletion(root, key);

  std::cout << std::endl;
  std::cout << "Inorder traversal after deletion : ";
  InOrder(root);

  return 0;
}
