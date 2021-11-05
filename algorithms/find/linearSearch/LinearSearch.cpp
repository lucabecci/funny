#include<iostream>
#include<cassert>
#include<cstring>

int linear_search(int arr[], int size, int v)
{
  int i;
  for(i = 0; i < size; i++)
  {
    if(arr[i] == v)
    {
      return v;
    }
  }
  return -1;
}


int main()
{
  int *arr = new int[7]{22,33,102,11,45,22,2000};
  assert(linear_search(arr, 7, 22) == 22);
  assert(linear_search(arr, 7, 45) == 45);
  return 0;
}
