#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(100);
    iota(v.begin(),v.end(),10);
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<" ";
    }
    
   return 0;
}