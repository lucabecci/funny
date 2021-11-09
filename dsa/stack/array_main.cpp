#include<bits/stdc++.h>


//stack of 20 v
class Stack
{
  private:
    int top;

  public:
    int a[2];

    Stack() {top = -1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top >= (2 - 1))
    {
      std::cout << "Stack overflow!" << std::endl;
      return false;
    }
    else
    {
      a[++top] = x;
      std::cout << x << " pushed into stack" << std::endl;
      return true;
    }
}


int Stack::pop()
{
  if(isEmpty())
  {
    std::cout << "Stack underflow!" << std::endl;
    return 0;
  }
  else
  {
    int x = a[top--];
    return x;
  }
}


int Stack::peek()
{
  if(isEmpty())
  {
    std::cout << "Stack underflow!" << std::endl;
    return 0;
  }
  else
  {
    int x = a[top];
    return x;
  }
}

bool Stack::isEmpty()
{
  if(top < 0)
  {
    return true;
  }
  else{
    return false;
  }
}

int main(int argc, char *argv[])
{
  Stack c;
  c.push(22);
  c.push(44);
  c.push(1042);
  std::cout << "Before the pop: " << c.peek() << std::endl;
  c.pop();
  std::cout << "After the pop: " << c.peek() << std::endl;
  return 0;
}
