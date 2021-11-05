#include<iostream>


int binarySearch(int arr[], int first, int last, int num)
{ 
  while(first <= last)
  {
    int middle = (first + last) / 2;
    if(arr[middle] == num)
    {
      return arr[middle];
    } 
    else if(arr[middle] < num)
    {
      first = middle + 1;
    } 
    else
    {
      last = middle - 1;
    }
  }
  return -1;
};

int main(){
  int i, arr[10], num;
    std::cout << "Enter the 10 elements" << std::endl;
  for(i = 0; i < 10; i++)
  {
    std::cin >> arr[i];
  }
  std::cout << "Enter the number to find" << std::endl;
  std::cin >> num;
  int result = binarySearch(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1, num);
  if(result != num)
  {
    std::cout << "Not find" << std::endl;
  } else
  {
    std::cout << "Value find" << std::endl;
  }
  return 0;
}
