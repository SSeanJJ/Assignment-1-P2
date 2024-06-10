#include <iostream>
#include <limits.h> // For INT_MAX

int findMinRec(int arr[], int n) 
{
   
    if (n == 1) 
    {
        return arr[0];
    }
    

    int minOfRest = findMinRec(arr, n - 1);
    
    return std::min(arr[n - 1], minOfRest);
}

int main() 
{
    int arr[] = {12, 34, 5, 70, 23, 2, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int min = findMinRec(arr, n);

    std::cout << "The smallest value in the array is: " << min << std::endl;
    
    
    
    
    return 0;
}
