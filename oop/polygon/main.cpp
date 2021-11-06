#include <string>
#include <iostream>

#include "polygon.h"

int main(int argc, char * argv[]) {
    Polygon polygon = Polygon(4, "Rectangle");
    std::cout << polygon.GetName() << " has " << polygon.GetNumSides() << " sides"<< std::endl;
}
