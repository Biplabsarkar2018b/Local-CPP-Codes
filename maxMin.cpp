#include<iostream>
using namespace std;
int* maxMin(int arr[])
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }

        if (arr[i]<min)
        {
            min = arr[i];
        } 
    }

    int* newArr = new int [max,min];                       
    return newArr;
    
}

int main()
{

    int arr[5] = {1,2,3,4,5};
    int* result = maxMin(arr);

    cout<<"The max is: "<<result[0]<<" "<<"The min is: "<<result[1];
   return 0;
}