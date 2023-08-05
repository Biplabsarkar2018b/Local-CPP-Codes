#include<iostream>
using namespace std;

void selectionSort(int a[])
{
    for (int i = 0; i < 4; i++)
    {
        int min = i;
        for (int j = i+1; j < 5; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
        }

        if (min!=i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        
        
    }
    
}


int main()
{
    int arr[5];
    cout<<"Enter 5 integers in random order: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"UNSORTED ARRAY: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr);
    cout<<"SORTED ARRAY: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
   return 0;
}