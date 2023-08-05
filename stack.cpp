#include<iostream>
#include<string>
using namespace std;

class Stack{
    private:
    int top; 
    int arr[5];

    public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
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
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            int popVal = arr[top];
            arr[top]=0;
            top--;
            return popVal;
        }   
    }
    int count()
    {
        return (top+1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }  
    }
    void change(int pos,int val)
    {
         arr[pos] = val;
         cout<<"Value Chnged at Location: "<<pos<<endl;
    }
    void display()
    {
        for (int i = 4; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }   
    }
    
};

int main()
{   
    Stack s2;
    int position,value,option;

    do{
        cout<<"Enter option number"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. peek"<<endl;
        cout<<"6. change"<<endl;
        cout<<"7. count"<<endl;
        cout<<"8. display"<<endl;
        cout<<"9. clear Screen"<<endl;
        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter The Value"<<endl;
            cin>>value;
            s2.push(value);
            break;
        case 2:
            cout<<"Popped Value is "<<s2.pop()<<endl;
            break;
        case 3:
            if (s2.isEmpty())
            {
                cout<<"The Stack is Empty"<<endl;
            }
            else
            {
                cout<<"The Stack is not Empty"<<endl;
            }
        case 4:
        if (s2.isFull())
        {
            cout<<"The Stack is Full"<<endl;
        }
        else
        {
            cout<<"The Stack is not Full"<<endl;
        }
        
        case 5:
            cout<<"Please Enter The position: "<<endl;
            cin>>position;
            s2.peek(position);
            break;
        case 6:
            cout<<"Enter Position and Value: "<<endl;
            cin>>position>>value;
            s2.change(position,value);
            break;
        case 7:
            cout<<"Total: "<<s2.count()<<endl;
            break;
        case 8:
            s2.display();
            break;
        case 9:
            system("cls");
            break;
        default:
        cout<<"Please Enter a Valid Option"<<endl;
            break;
        }
    }while(option!=0);
   return 0;
}