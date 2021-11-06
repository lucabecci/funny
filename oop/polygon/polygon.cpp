#include <string>	
#include "polygon.h"

Polygon::Polygon(const int num_sides, const std::string & name) {
    this->num_sides = num_sides;	
    this->name = name;			
}
int Polygon::GetNumSides(void) const {	
    return this->num_sides;
}
void Polygon::SetNumSides(const int num_sides) {
    this->num_sides = num_sides;
}
std::string & Polygon::GetName(void) const {
  return this->name;
}
void Polygon::SetName(const std::string & name) {
    this->name = name;
}
