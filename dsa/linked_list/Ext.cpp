#include<string>

bool isDigit(const std::string & s)
{
  for(char i : s)
  { 
    if(!isdigit(i))
    {
      return false;
    }
  }
  return true;
};
