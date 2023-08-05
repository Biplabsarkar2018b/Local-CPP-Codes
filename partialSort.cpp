#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    sort(arr,arr+9);
    cout<<is_sorted(arr,arr+9);
    
   return 0;
}