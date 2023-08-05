#include<iostream>
using namespace std;

class Stack
{
    private: 
        int top;
        int arr[5];

    public:
       Stack()
       {
           top = -1;
           for (int i = 0; i < 5; i++)
           {
               arr[i] = 0;
           }
       }

       bool isEmpty()
       {
           if (top==-1)
           {
               return true;
           }
           else
           {
               return false;
           } 
       }

       bool isFull()
       {
           if (top==4)
           {
               return true;
           }
           else
           {
               return false;
           }
       }

       void push(int val)
       {
           if (isFull())
           {
               cout<<"Stack OVERFLOW"<<endl;
           }
           else
           {
               top++;
               arr[top] = val;
           }
       }

       int pop()
       {
           if (isEmpty())
           {
               cout<<"Stack UNDERFLOW"<<endl;
           }
           else
           {
               int temp = arr[top];
               arr[top] = 0;
               top--;
               return temp;
           }
           
       }

       int peek(int pos)
       {
           if (isEmpty())
           {
               cout<<"Stack UNDERFLOW"<<endl;
               return 0;
           }
           else
           {
               return arr[pos];
           } 
       }
       int count()
       {
           return (top+1);
       }
       void change(int pos,int val)
       {
           arr[pos] = val;
           cout<<"Value changed at position: "<<pos<<endl;
       }
       void display()
       {
           for (int i = 0; i < 5; i++)
           {
               
           }
           
       }
};

int main()
{
    Stack s1;
    int option,value,position;

    do
    {
        //cout<<"CHOOSE AN OPTION: "<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. IS FULL?"<<endl;
        cout<<"4. IS EMPTY?"<<endl;
        cout<<"5. PEEK"<<endl;
        cout<<"6. CHANGE"<<endl;
        cout<<"7. DISPLAY"<<endl;
        cout<<"8. COUNT"<<endl;
        cout<<"9. CLEAR SCREEN"<<endl<<endl<<endl;
        cout<<"ENTER THE OPTION: ";
        cin>>option;

        switch (option)
        {
        case 0:
            break;

        case 1:
            
        
        default:
            break;
        }
    } while (option!=0);    
   return 0;
}