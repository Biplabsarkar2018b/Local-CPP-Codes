#include<iostream>
using namespace std;

class Queue{

    private:
        int arr[5];
        int front,rear;

    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i]=0;
            }
        }

        bool isEmpty()
        {
            if (rear==-1 && front==-1)
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
            if (rear == 4)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void enqueue(int val)
        {
            if (isFull())
            {
                cout<<"The Queue is full"<<endl;
                return;
            }
            else if (isEmpty())
            {
                front = 0;
                rear = 0;
            }
            else
            {
                rear++;
            }

            arr[rear] = val;
        }

        int dequeue()
        {
            int x;
            if (isEmpty())
            {
                cout<<"The Queue is Empty"<<endl;
                return 0;
            }
            else if (front == rear)
            {
                x = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
            }
            else
            {
                x = arr[front];
                arr[front] = 0;
                front++;
            }
            
            return x;   
        }

        int count()
        {
            return (rear-front+1);
        }
};

int main()
{       
    Queue q1;
    int option,value;

    do{
        cout<<"Enter option number"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cout<<"1. enqueue"<<endl;
        cout<<"2. dequeue"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. count"<<endl;
        cout<<"6. clear Screen"<<endl;
        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter The Value: ";
            cin>>value;
            q1.enqueue(value);
            cout<<endl;
            break;
        case 2:
            cout<<"The Dequeued Value Is: "<<q1.dequeue()<<endl;
            break;
        case 3:
            if (q1.isEmpty())
            {
                cout<<"The Queue is Empty"<<endl;
            }
            else
            {
                cout<<"The Queue is not Empty"<<endl;
            }
            break;
            
        case 4:
            if (q1.isFull())
            {
                cout<<"The Queue is Full"<<endl;
            }
            else
            {
                cout<<"The Queue is not Full"<<endl;
            }
            break;
        case 5:
            cout<<"Total items: "<<q1.count()<<endl;
            break;
        case 6:
           system("cls");
            break;
        default:
        cout<<"Please Enter a Valid Option"<<endl;
            break;
        }
    }while(option!=0);
   return 0;
}