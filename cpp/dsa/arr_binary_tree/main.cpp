#include<bits/stdc++.h>

char tree[10];

int root(char key)
{
  if (tree[0] != '\0')
  {
    std::cout << "Tree already had root" << std::endl;
  }
  else
  {
    tree[0] = key;
  }
  return 0;
}

int set_left(char key, int parent)
{
  if(tree[parent] == '\0')
  {
    std::cout << "Cant to set child at" << (parent * 2) + 1 << ", no parent found" << std::endl;
  }
  else
  {
    tree[(parent * 2) + 1] = key;
  }
  return 0;
}

int set_right(char key, int parent)
{
  if(tree[parent] == '\0')
  {
    std::cout << "Cant to set child at" << (parent * 2) + 2 << ", no parent found" << std::endl;
  }
  else
  {
    tree[(parent * 2) + 2] = key;
  }
  return 0;
}

int Print_Tree(void)
{
  std::cout << std::endl;
  for(int i = 0; i < 10; i++)
  {
    if(tree[i] != '\0') std::cout << tree[i];
    else std::cout << "-";
  }
  return 0;
}

int main(int argc, char *argv[])
{
  root('A');
  set_left('B', 0);
  set_right('C', 0);
  set_left('D', 1);
  set_right('E', 1);
  Print_Tree();
  return 0;
}
