#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insertAtEnd(Node* &head,int d){
    if (head==NULL)
    {
       Node* newNode = new Node(d);
       head = newNode;
    }else
    {
        
    Node* newNode = new Node(d);
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    }
}


void insertAtHead(Node* &head,int d){
    if (head==NULL)
    {
        Node* newNode = new Node(d);
        head = newNode;
    }else
    {   
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
    
   

}

void insertAtPosition(Node* &head,int d,int pos){
    if (pos==1)
    {
        insertAtHead(head,d);
        return;
    }

    Node* newNode = new Node(d);
    Node* temp = head;
    int count = 1;
    while (count<pos-1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next==NULL)
    {
        insertAtEnd(head,d);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;

    
}


void deleteNode(Node* &head,int pos){
    if (pos==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }else
    {
        Node* before = NULL;
        Node* curr = head;
        int count  = 1;
        while (count<pos)
        {   before = curr;
            curr = curr->next;
            count++;
        }
        before->next = curr->next;
        curr->next->prev = before;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
        
    }
    
    
}


void printList(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        if (temp->next!=NULL)
        {
            cout<<"<->";
        }
        
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head;
    insertAtHead(head,2);
    printList(head);
    insertAtHead(head,1);
    printList(head);
    insertAtEnd(head,4);
    printList(head);
    insertAtPosition(head,0,1);
    printList(head);
    insertAtPosition(head,5,5);
    printList(head);
    insertAtPosition(head,12,3);
    printList(head);

    deleteNode(head,2);
    printList(head);


   return 0;
}