#include<iostream>
#include "List.h"

int main(int argc, char *argv[])\
{
  List l;
  std::cout << "Pushing 2 in the front" << std::endl;
  l.push_front(2);
  l.push_back(22);
  l.push_front(2222);
  l.push_front(31);
  std::cout << "Pushing 340000 in the back" << std::endl;
  l.push_back(340000);
  l.display();
  
  std::cout << "Deleting the 22" << std::endl;
  l.erase(22);
  std::cout << "Second display" << std::endl;
  l.display();
  return 0;
}
