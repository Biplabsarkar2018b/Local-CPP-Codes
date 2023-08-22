#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[start];
    int i = start;
    int j = end;
    while (i < j) {
        while (arr[i] <= pivot && i <= end) i++;
        while (arr[j] > pivot && j >= start) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]); // Place the pivot in its correct position
    return j;
}


void quickSort(vector<int>& arr,int start,int end){

    if(start<end){
        int p = partition(arr,start,end);

        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}

int main()
{
    vector<int> v = {-1,4,45,-23,89,8,23,1,1,3};
    quickSort(v,0,v.size()-1);
    for(int i:v) cout<<i<<" "<<"<";
   return 0;
}