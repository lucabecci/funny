#include<string>
#include "rectangle.h"

Rectangle::Rectangle(const std::string &name, int length, int width) : Polygon(4, name)
{
  this->length = length;
  this->width = width;
}

int Rectangle::Area(void)  
{
  return length * width;
}
