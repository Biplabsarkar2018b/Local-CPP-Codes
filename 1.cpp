#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};


void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &head,int d){
    Node* temp = new Node(d);
    Node* i = head;
    while(i->next!=NULL){
        i = i->next;
    }
    i->next = temp;
}


void insertAtPosition(Node* &head,int pos,int d){


    if (pos==1)
    {
        insertAtHead(head,d);
        return;
    }
    
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
    }
    

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

void deleteNode(Node* &head,int pos){
    if (pos==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else
    {
        Node* prev = NULL;;
        Node* curr = head;
        int count  = 1;
        while (count<pos)
        {   prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
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
            cout<<"->";
        }
        
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{   Node* head;
    insertAtHead(head,10);
    printList(head);
    insertAtHead(head,9);
    printList(head);
    insertAtHead(head,8);
    printList(head);
    insertAtHead(head,7);
    printList(head);
    insertAtHead(head,6);
    printList(head);
    insertAtEnd(head,11);
    printList(head);
    insertAtEnd(head,12);
    insertAtPosition(head,2,67);
    printList(head);
    insertAtEnd(head,13);
    printList(head);
    insertAtEnd(head,14);
    insertAtPosition(head,4,67);
    printList(head);
    insertAtPosition(head,1,67);
    printList(head);

    deleteNode(head,1);
    printList(head);
    deleteNode(head,2);
    printList(head);
    deleteNode(head,3);
    printList(head);





   return 0;
}