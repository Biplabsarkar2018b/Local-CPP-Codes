#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int generate_random()
{
    return rand()%10;
}
int main()
{
    vector<int> v1(10),v2(10);

    generate(v1.begin(),v1.end(),generate_random);

    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
    {
        cout<<*i<<" ";
    }
    

   return 0;
}