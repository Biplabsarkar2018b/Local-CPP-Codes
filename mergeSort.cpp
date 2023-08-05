#include<iostream>
using namespace std;

void merge(int a[],int left,int mid,int right)
{
    int i,j,k;
    int n1 = mid-left+1;
    int n2 = right-mid;

    int leftArray[n1],rightArray[n2];

    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = a[left+i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArray[i] = a[mid+1+j];
    }
    
    
}

void mergeSort()
{

}

void printArray()
{

}

int main()
{
   return 0;
}