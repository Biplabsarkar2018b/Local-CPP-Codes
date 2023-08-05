#include<bits/stdc++.h>
using namespace std;

vector<int> msalgo(vector<int>&arr, int start,int end){
    if(start==end){
        
    }
    int middle = (start + end)/2;
    vector<int> f = msalgo(arr,start,middle);
    vector<int> s = msalgo(arr,middle+1,end);
}
void mergeSort(vector<int> &arr,int n){
    msalgo(arr,0,n-1);
}
int main()
{
    vector<int> arr = {4,1,3,9,7};
    mergeSort(arr,5);
    for(int i:arr) cout<<i<<" ";
   return 0;
}