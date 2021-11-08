#include<string>
#include<deque>
class Deque
{
  private:
    std::deque<int> d;
  public:
    void GetProcess(void);
    void Clear(void);
};

void Deque::GetProcess(void)
{
  std::cout << "Main process of my deque dsa" << std::endl;
  std::cout << "Pushing items..." << std::endl;
  d.push_front(20);
  d.push_front(33);
  d.push_front(44);
  d.push_back(321);
  d.push_front(212);
  d.push_back(3);

  std::cout << "Size at the moment: " << d.size() << std::endl;
  int c = 0;
  for(std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
  {
    std::cout << "Position: " << c << std::endl;
    std::cout << *it << std::endl;
    c++;
  }
};

void Deque::Clear(void)
{
  std::cout << "Clearing the deque..." << std::endl;
  d.clear();
  std::cout << "New size of the deque: " << d.size() << std::endl;
  std::cout << "Process finished" << std::endl;
}
