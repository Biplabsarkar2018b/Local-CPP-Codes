#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  pair<int,char> first;
  pair<string,double> second;
  pair<int,char> third(first);
  pair<int,int> fourth;

  first = make_pair(67,'i');
  second = make_pair("bal",7.9);
  fourth = make_pair(4,6);
  int a,b;
  tie(a,b) = fourth;

    cout<<first.first<<" "<<first.second<<endl;
    cout<<second.first<<" "<<second.second<<endl;
    cout<<third.first<<" "<<third.second<<endl;
    cout<<fourth.first<<" "<<fourth.second<<endl;
    cout<<a<<" "<<b<<endl;


   return 0;
}