#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for (int i = 0; i < 10; i++)
    {
       cout<<v.at(i)<<" ";
    }
    cout<<endl;
    vector<int>::iterator x,y;
    x = v.begin();
    y = v.end();

    cout<<binary_search(x,y,5);
    
    return 0;
}