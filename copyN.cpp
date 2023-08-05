#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,};
    vector<int> v1(arr,arr+8),v2;
    copy_n(v1.begin(),4,v2.end());
    for (vector<int>::iterator i = v2.begin(); i != v2.end(); i++)
    {
        cout<<*i<<" ";
    }
    
   return 0;
}