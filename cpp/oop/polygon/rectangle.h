#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<string>
#include "polygon.h"

class Rectangle : public Polygon
{
  private:
    int length;
    int width;

  public:
    Rectangle(const std::string &name, int length, int width); //constructor with &name prop of super(js)

    int GetLength(void) { return this->length; }
    void Setlength(int length) {this->length = length;}

    int GetWidth(void) {return this->width;}
    void SetWidth(int width) {this->width = width;}
    
    //Other methods:
    int Area(void);
};
#endif
