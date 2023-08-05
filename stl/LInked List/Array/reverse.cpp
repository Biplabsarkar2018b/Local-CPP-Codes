#include<iostream>
using namespace std;

void reverseArray(int arr[]){
    int start,end;
    start = 0;
    end = 4;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{
    cout<<"Enter 5 Array Elements: ";
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr);
    cout<<endl;
    cout<<"The Reversed Array Is: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    
   return 0;
}