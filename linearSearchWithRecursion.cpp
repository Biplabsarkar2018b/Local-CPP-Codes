#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int e){

    if (size==0)
    {
        return false;
    }
    if (arr[0]==e)
    {
            return true;
    }else
    {
        return linearSearch(arr+1,size-1,e);
    }
    

    
    
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<linearSearch(arr,5,3);
   return 0;
}