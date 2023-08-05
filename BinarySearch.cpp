#include<iostream>
using namespace std;

int binarySearch(int a[],int left,int right,int n)
{
    while (left<=right)
    {
        int mid = left + (right-left)/2;
        if (a[mid]==n)
        {
            return mid;
        }
        else if (a[mid]<n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
    
}


int main()
{
    int num,output,arr[10];

    cout<<"Enter 10 numbers in Ascending order: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search: ";
    cin>>num;

    output = binarySearch(arr,0,9,num);

    if (output==-1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<"Found at: "<<output<<endl;
    }
    
    
    
   return 0;
}