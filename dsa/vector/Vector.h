#include<iostream>
#include<vector>

class Vector {
  private:
    std::vector<int> v;
  public:
    void GetProcess();
    void Iterate();
    void Clear();
};

void Vector::GetProcess()
{ 
  std::cout << "Vector main process..." << std::endl;
  v.insert(v.begin(),33);
  v.push_back(22);
  v.insert(v.begin(), 21);
  v.push_back(2000);
  std::cout << "Size after insert all values: "<< v.size() << std::endl;
}

void Vector::Iterate()
{
  int a = 0;
  for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {    
    std::cout << "Position: " << a << std::endl;
    std::cout << *it << std::endl;
    a++;
  } 

  std::cout << "See the second value: " << v.at(2) << std::endl;
  v.erase(v.begin());
  v.pop_back();
  std::cout << "New size of my vector: " << v.size() << std::endl; 
}


void Vector::Clear()
{
  std::cout << "Deleting all values of the vector..." << std::endl;
  v.clear();
  std::cout << "Values deleted. The new size is: " << v.size() << std::endl;
  std::cout << "Process finished" << std::endl;
}
