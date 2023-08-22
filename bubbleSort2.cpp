#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}


int main()
{
    vector<int> v = {9,1,2,3,1,6,-1};
    bubbleSort(v);
    for(int i:v) cout<<i<<" ";
    
   return 0;
}