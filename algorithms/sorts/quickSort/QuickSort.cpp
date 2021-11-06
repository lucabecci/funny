#include<iostream>
#include<cstdlib>

namespace sorting 
{
  int partition(int arr[], int l, int h)
  {
   int pivot = arr[h];
   int i = (l - 1);

   for(int j = l; j < h; j++)
   {
     if(arr[j] <= pivot)
     {
       i++;
       int t = arr[i];
       arr[i] = arr[j];
       arr[j] = t;
     }
   }
   int t = arr[i + 1];
   arr[i + 1] = arr[h];
   arr[h] = t;
   return (i + 1);
  }
  
  void quickSort(int arr[], int l, int h)
  {
    if(l < h)
    {
      int p = partition(arr, l, h);
      quickSort(arr, l, p -1);
      quickSort(arr, p + 1, h);
    }
  }
}


using sorting::quickSort;

void show(int arr[])
{
  
}

int main(){
  return 0;
}

