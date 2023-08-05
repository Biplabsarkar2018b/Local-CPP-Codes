#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {4,3,5,6,9,87,1};
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    sort(arr,arr+7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}