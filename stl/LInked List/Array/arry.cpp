#include<iostream>
using namespace std;
void reverse(int ar[]){
   int start,end;
   start = 0;
   end = 4;
   while (start<=end)
   {
       int temp = ar[start];
       ar[start] = ar[end];
       ar[end] = temp;
       start++;
       end--;
   }
   
}
int main()
{
    int a[5];
      for(int i=0;i<5;i++){
          cin>>a[i];
      }

      for (int i = 0; i < 5; i++)
      {
          cout<<a[i];
      }
      cout<<endl;
      reverse(a);
      cout<<"After Reversing: ";
      for (int i = 0; i < 5; i++)
      {
          cout<<a[i];
      }
      
      
   return 0;
}
