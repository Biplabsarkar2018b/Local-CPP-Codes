#include<iostream>
using namespace std;

bool binarySearch(int arr[],int size,int k){
    int s,e,mid;
    s=0;
    e=size;
    mid = s+(e-s)/2;

    if (size==0)
    {
        return false;
    }
    
    if (arr[mid]==k)
    {
        return true;
    }else if(k>arr[mid])
    {
        bool result = binarySearch(arr+mid+1,size-mid-1,k);
        return result;
    }
    else
    {
        bool result = binarySearch(arr,size-mid-1,k);
        return result;
    }
    
    

    
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    bool result = binarySearch(arr,5,8);
    if (result)
    {
        cout<<" Found "<<endl;
    }else
    {
        cout<<" Not Found "<<endl;
    }
    
    
   return 0;
}