#include <iostream>
#include <algorithm>
using namespace std;
 
// C++ program to demonstrate working of `std::binary_search` algorithm
int main()
{
    int arr[] = { 4, 6, 8, 10, 15 };
    int target = 15;
 
    if (binary_search(arr,arr+5, target))
    {
        cout << "Element found in the array";
    }
    else {
        cout << "Element not found in the array";
    }
 
    return 0;
}