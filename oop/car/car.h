#include<string>
class Car 
{
  private:
    int year;
    std::string make;
  public:
    int GetYear(void) const {return this->year;}
    void SetYear(const int year) {this->year = year;}
    std::string & GetMake(void) {return this->make;}
    void SetMake(const std::string & make) {this->make = make;}
};
