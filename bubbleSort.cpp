#include<iostream>
using namespace std;

void bubbleSort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5-i-1); j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    
}

int main()
{
    int arr[5];
    cout<<"Enter 5 integers: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];

    }

    cout<<"BEFORE SWAPPING: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubbleSort(arr);
    cout<<"AFTER SWAPPING: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
   return 0;
}