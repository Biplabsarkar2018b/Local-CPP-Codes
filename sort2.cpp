#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare_function(int i, int j)
{
   return i > j;    // return 1 if i>j else 0
}
bool compare_string(string i, string j)
{ 
  return (i.size() < j.size()); 
}
int main()
{
    int arr[] = {1,3,0,5,2,4,5,6,3,7,10};
    sort(arr,arr+11);
    for (int i = 0; i < 11; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v1;
    v1.push_back(23);
    v1.push_back(3);
    v1.push_back(13);
    v1.push_back(67);
    v1.push_back(9);

    vector<int>::iterator i,j;

    i = v1.begin();
    j = v1.end();

    for ( i; i!=j; i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    i = v1.begin();
    j = v1.end();
    sort(i,j,compare_function);
    cout<<"After Sorting: ";
    for ( i; i!=j; i++)
    {
        cout<<*i<<" ";
    }

    string ar[] = {"an","biplab","lodu","priya"};
    sort(ar,ar+4,compare_string);
    for (int i = 0; i < 4; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    
    
   return 0;
}