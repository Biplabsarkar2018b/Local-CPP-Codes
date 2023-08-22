#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>& arr){

    int n = arr.size();
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main()
{
    vector<int> v = {8,1,3,6,7,12,8,2};
    selectionSort(v);
    for(int i:v) cout<<i<<" ";
   return 0;
}