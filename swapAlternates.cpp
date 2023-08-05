#include<iostream>
using namespace std;

void swapAlternates(int arr[],int size){
   for (int i = 0; i < size; i=i+2)
   {
       if (i==(size-1))
       {
           break;
       }
       
       int temp = arr[i];
       arr[i] = arr[i+1];
       arr[i+1] = temp;
   }
   
}

int main()
{

    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    
    swapAlternates(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i];
    }
    
   return 0;
}