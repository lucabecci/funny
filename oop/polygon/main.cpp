#include<iostream>
#include "rectangle.h"


int main()
{
  Rectangle r = Rectangle("Square", 6, 6);
  std::cout << r.GetName() << " has " << r.GetNumSides() << " sides, and an area of" << r.Area() << std::endl;
}
