#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if (size==0 || size==1)
    {
        return true;
    }

    if (arr[0]>arr[1])
    {
        return false;
    }else
    {
        bool ans = isSorted(arr+1,size-1);
        return ans;

    }
   
}

int main()
{
    int arr[] = {2,3,5,8,9,10};
    bool ans = isSorted(arr,6);
  
    
   return 0;
}