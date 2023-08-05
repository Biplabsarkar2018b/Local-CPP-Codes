#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        // int temp = arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
}
int main()
{
    vector<int> arr = {9,4,5,1,2,0,4,3,6,7,8};
    insertionSort(arr,11);
    for(int i:arr){
        cout<<i<<" ";
    }
   return 0;
}