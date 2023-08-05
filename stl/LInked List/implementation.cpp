#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void sortLinkedList(Node* &head){
    Node *current,*index;

    current = head;
    if (head==NULL)
    {
        return;
    }

    while (current!=NULL)
    {
        index = current->next;
        while (index!=NULL)
        {
            if (current->data>index->data)
            {
                int temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
       current = current->next; 
    }
}

void reverseLL(Node* &head){
    if (head==NULL)
    {
        return;
    }
    Node *previous,*current,*forward;

    current = head;
    previous = NULL;
    forward = NULL;
    while (current!=NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;



        current = forward;
    }


    head = previous;
    
    
}


void insertAtBegining(Node* &head,int val){
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

void insertAtEnd(Node* &head,int val){
    Node *n = new Node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    
    
    
}


void insertAtMiddle(Node* &head,int val,int key){
    Node* n = new Node(val);
    Node* temp = head;
    
    while (temp->next->data!=key)
    {
        temp = temp->next;
    }
    n->next = temp->next->next;
    temp->next->next = n;
    
    
}

bool search(Node* &head,int key){
    Node* temp = head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        
        temp = temp->next;
    }

    return false;
    
}

Node* getMiddle(Node *head){
    Node *slow,*fast;
    slow = head;
    fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
    
}



void displayLL(Node *head){

    if (head==NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

}

int main()
{

    Node *head;
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);


    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;
    cout<<"Before Adding new Value: ";
    displayLL(head);
    cout<<endl;
    insertAtBegining(head,0);
    cout<<"After Adding 0 at Start: ";
    displayLL(head);
    cout<<endl;
    insertAtEnd(head,5);
    cout<<"After Adding 5 at End: ";
    displayLL(head);
    cout<<endl;
    insertAtMiddle(head,13,1);
    cout<<"After Adding 13 After 1: ";
    displayLL(head);
    cout<<endl;
    cout<<"Is 2 present in the Linked List?"<<endl;
    if (search(head,2))
    {
        cout<<"Yes"<<endl;
    }
    sortLinkedList(head);
    cout<<"After Sorting: ";
    displayLL(head);
    cout<<endl;
    cout<<"After Doing The Reversal: ";
    reverseLL(head);
    displayLL(head);
    cout<<endl;
    cout<<getMiddle(head)->data;

   
    
   return 0;
}