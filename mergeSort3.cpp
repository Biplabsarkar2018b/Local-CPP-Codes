#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& arr,int start,int mid,int end){
    
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    int m = 0;
    for(int it=start;it<=end;it++){
        arr[it] = temp[m];
        m++;
    }
}

void mergeSort(vector<int>& arr,int start,int end){

    if(start>=end) return;

    int mid = (start + end) / 2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}


int main()
{
    vector<int> v = {12,12,11,0,-12,3,4,5,3,1,2};
    mergeSort(v,0,v.size()-1);
    for(int i:v) cout<<i<<" ";
   return 0;
}