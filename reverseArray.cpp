#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while (start<end)
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
    int arr[5] = {1,2,3,4,5};
    cout<<"Elements in the array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    reverse(arr,0,4);

    cout<<"REVERSED Elements in the array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;


    
   return 0;
}