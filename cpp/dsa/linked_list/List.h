#include <iostream>
#include <memory>
#include "Link.h"
class List 
{
  private:
    std::shared_ptr<Link> first;
    std::shared_ptr<Link> last;
    
  public:
    List()
    {
      first = std::make_shared<Link>();
      last = nullptr;
    }

    bool isEmpty();

    void push_back(int new_element);
    void push_front(int new_element);
    void erase(int old_element);
    void display();
    std::shared_ptr<Link> search(int find_element);
    void reverse();
};


bool List::isEmpty()
{
  if(last == nullptr)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void List::push_back(int new_element)
{
  if(isEmpty())
  {
    first->succ() = std::make_shared<Link>(new_element);
    last = first->succ();
  }else
  {
    last->succ() = std::make_shared<Link>(new_element);
    last = last->succ();
  }
}


void List::push_front(int new_element)
{
  if(isEmpty())
  {
    first->succ() = std::make_shared<Link>(new_element);
    last = first->succ();
  }
  else
  {
    std::shared_ptr<Link> t = std::make_shared<Link>(new_element);
    t->succ() = first->succ();
    first->succ() = t;
  }
}


void List::display()
{
  if(isEmpty())
  {
    std::cout << "List is empty!" << std::endl;
    return;
  }
  else
  {
    std::shared_ptr<Link> t = first;
    while(t->succ() != nullptr)
    {
      std::cout << t->succ()->val() << std::endl;
      t = t->succ();
    }
  }
}

void List::erase(int old_element)
{
  if(isEmpty())
  {
    std::cout << "THE LIST IS EMPTY" << std::endl;
    return;
  }
  std::shared_ptr<Link> t = first;
  std::shared_ptr<Link> to_be_removed = nullptr;

  while(t != last && t->succ()->val() != old_element)
  {
    t = t->succ();
  }
  if(t == last)
  {
    std::cout << "Element not found" << std::endl;
    return;
  }
  to_be_removed = t->succ();
  t->succ() = t->succ()->succ();
  to_be_removed.reset();

  if(first == last)
  {
    last = nullptr;
  }
}
