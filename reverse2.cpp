#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,};
    cout<<"Before Reversing: ";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,arr+9);
    cout<<"After Reversing: ";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
   return 0;
}