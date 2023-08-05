#include<iostream>
using namespace std;

int sum(int arr[],int size){

    if (size==1 || size==0)
    {
        return arr[0];
    }

    int small = arr[0]+arr[1];
    int answer = sum(arr+2,size-2);
    return answer+small;
}

int main()
{
    int arr[5] = {2,5,7,8,5};
    cout<<sum(arr,5);
   return 0;
}