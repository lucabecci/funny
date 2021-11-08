#ifndef POLYGON_H
#define POLYGON_H
#include <string>

class Polygon {
private:
    int num_sides;  
protected:
    std::string name;  
public:
    Polygon(int num_sides, const std::string & name);
    
    int GetNumSides(void);
    void SetNumSides(int num_sides);

    std::string & GetName(void);
    void SetName(std::string & name);

}; 

#endif
