#include<iostream>
using namespace std;

void linearSearch(int a[],int n)
{
    int temp = -1;
    for (int i = 0; i < 4; i++)
    {
        if (a[i]==n)
        {
            cout<<"Found at Location: "<<(i+1)<<endl;
            temp=0;
        }
        
    }
    if (temp==-1)
    {
        cout<<"Not Found"<<endl;
    }
    
    
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"Enter a number to search: ";
    int num;
    cin>>num;
    linearSearch(arr,num);
   return 0;
}