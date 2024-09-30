// DOUBLE LINKED LIST //

#include<iostream>
using namespace std;

class node{
    public:

    int data ;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next=NULL;
        prev=NULL;
    }
};

void push_front(node* &head, int val) {

    node* newNode = new node(val);
    newNode -> next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
   
    head = newNode;
}

void push_back(node* &head, int val) {

    if (head == NULL) {
        push_front(head, val);
        return; 
    }

    node* newNode = new node(val);
    node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void print_list(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtHead(node* &head) {
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deleteNode(node* head , int pos) {

    if (pos==1) {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count=1;
    while(temp!=NULL &&  count!=pos) {
        temp = temp->next;
        count++;  
    }
     
    temp->prev->next = temp->next;
    if (temp->next!=NULL) {
        temp->next->prev = temp->prev;
    }
   
    delete temp;
}

int main () {
    node* head = NULL;
    push_front(head,1);
    push_front(head,2);
    push_front(head,3);
    push_front(head,4);

    print_list(head);

    push_front(head,5);
    push_front(head,6);
    push_front(head,7);
    push_front(head,8);
    
    deleteNode(head,3);

    print_list(head);


    return 0;

}
