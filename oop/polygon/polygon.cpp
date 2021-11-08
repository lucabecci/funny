#include <string>	
#include "polygon.h"

Polygon::Polygon(int num_sides, const std::string & name) {
    this->num_sides = num_sides;	
    this->name = name;			
}
int Polygon::GetNumSides(void) {	
    return this->num_sides;
}
void Polygon::SetNumSides(int num_sides) {
    this->num_sides = num_sides;
}
std::string & Polygon::GetName(void) {
  return this->name;
}
void Polygon::SetName(std::string & name) {
    this->name = name;
}
