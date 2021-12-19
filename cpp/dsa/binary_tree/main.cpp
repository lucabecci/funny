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

void DeleteDeepest(Node* root, Node* d_node)
{
  std::queue<Node*> q;
  q.push(root);
  Node* temp;
  while(!q.empty())
  {
    temp = q.front();
    q.pop();
    if(temp == d_node)
    {
      temp = NULL;
      delete (d_node);
      return;
    }
    if(temp->right)
    {
      if(temp->right == d_node)
      {
        temp->right = NULL;
        delete (d_node);
        return;
      }
      else 
      {
        q.push(temp->right);
      }
    }
  }
  if(temp->left)
  {
    if(temp->left == d_node)
    {
      temp->left = NULL;
      delete (d_node);
      return;
    }
    else
    {
      q.push(temp->left);
    }
  }
}

Node* Deletion(Node* root, int value)
{
  if(root == NULL) return NULL;
  if(root->left == NULL && root->right == NULL)
  {
    if(root->data == value) return NULL;
    else return root;
  }

  std::queue<Node*> q;
  q.push(root);

  Node* temp;
  Node* key_node = NULL;

  while(!q.empty())
  {
    temp = q.front();
    q.pop();

    if(temp->data == value) key_node = temp;

    if(temp->left) q.push(temp->left);

    if(temp->right) q.push(temp->right);
  }

  if(key_node != NULL)
  {
    int x = temp->data;
    DeleteDeepest(root, temp);
    key_node->data = x;
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

  int key = 11;
  root = Deletion(root, key);

  std::cout << std::endl;
  std::cout << "Inorder traversal after deletion : ";
  InOrder(root);

  return 0;
}
