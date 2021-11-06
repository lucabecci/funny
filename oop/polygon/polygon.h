#include <string>

class Polygon {
private:
    int num_sides;  
protected:
    std::string name;  
public:
    Polygon(const int num_sides, const std::string & name);
    
    int GetNumSides(void) const;
    void SetNumSides(const int num_sides);

    std::string & GetName(void) const;
    void SetName(const std::string & name);

}; 
