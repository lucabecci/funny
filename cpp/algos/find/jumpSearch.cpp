#include<iostream>
#include <cmath>

int jump_search(int arr[], int x)
{
    int prev = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    int step = sqrt(len); 
    std::cout << "Step value:" << step << std::endl;
    std::cout << "len value:" << len << std::endl;
    while(arr[std::min(step, len) - 1] < x)
    {
        prev = step;
        step += sqrt(len);
        if (prev >= len)return -1;
    }

    while(arr[prev] < x)
    {
        prev++;
        if(prev == std::min(step, len)) return -1;
    }

    if(arr[prev] == x) return prev;
    return -1;
}

int main(int argc, char** argv){
    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                34, 55, 89, 144, 233, 377, 610 };
    int x = 55;

    int i = jump_search(arr, x);

    if(i > -1) std::cout << "Index of the value:" << i << std::endl;
    else std::cout << "Value not found in the index" << std::endl;

    return -1;
}