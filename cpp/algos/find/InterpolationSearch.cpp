#include <iostream>
#include <cassert>
#include <cstring>

int interpolation_search(int arr[], int v, int l)
{
  int low = 0, high, mid;
  high = l - 1;

  while(arr[low] <= v && arr[high] >= v)
  {
    mid = (low + ((v - arr[low]) * (high - low)) / (arr[high] - arr[low]));
    if (arr[mid] > v)
    {
      high = mid + 1;
    }
    else if (arr[mid] < v)
    {
      low = mid + 1;
    }
    else
    {
      return arr[mid];
    }
  }
  return -1;
}

int main()
{
  int* arr = new int[15]{2,6,10,23,32,36,39,40,42,54,56,88,89,102,142};
  int got = interpolation_search(arr, 36, 10);
  if(got == 36)
  {
    std::cout << "Success:" << got << std::endl; 
  }else
  {
    std::cout << "Error:" << got << std::endl;
  }
  delete[] arr;
  return 0;
}
