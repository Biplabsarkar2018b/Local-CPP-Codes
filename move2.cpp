#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Biplab";
    string b = "Sarkar";
    vector<string> v;
    v.push_back(a);
    v.push_back(move(b));

    cout<<a<<endl;
    cout<<b<<endl;
   return 0;
}