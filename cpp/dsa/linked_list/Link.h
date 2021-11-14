#include <memory>
#include<string>
class Link 
{
  private:
    int pvalue;
    std::shared_ptr<Link> psucc;
  public:
    int val() {return pvalue;}

    std::shared_ptr<Link> & succ() {return psucc;}

    explicit Link(int value = 0) : pvalue(value), psucc(nullptr) {};
};
