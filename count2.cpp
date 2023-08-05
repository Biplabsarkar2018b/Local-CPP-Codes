#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,1,2,2,3,3,3,4,5,6,6,6,6,7,7,8,8,9,};
    int count_3 = count(a,a+18,3);
    cout<<"Number of 3s are: "<<count_3;
   return 0;
}