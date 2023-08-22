#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();

    for(int i=1;i<n;i++){

        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main()
{
    vector<int> v = {-1,3,1,2,1,0,7,18};
    insertionSort(v);
    for(int i:v) cout<<i<<" ";
    
   return 0;
}