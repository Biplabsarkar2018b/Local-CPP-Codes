#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   // int arr[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v2,v1;
    v2.push_back(1);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(0);
    copy(v2.begin(),v2.end(),v1.begin());

    //cout<<v2.at(0);
    cout<<v2[1];
    /*for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
    {
        
    }*/


    
   return 0;
}