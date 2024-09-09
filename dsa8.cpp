Linked List code - 

  #include<iostream>
using namespace std;

//Node class
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }

//Linked list class
class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }
    void push_front (int val) {
        Node* newNode = new Node(val); //dynamic
        // Node* newNode(val) //static
          
        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back (int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = NULL;
        }
        else {
           tail ->next = newNode;
           tail = newNode;
        }
    }

    void printList () {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data <<"->";
            temp = temp->next ;
        }
        
   cout<<"NULL"<<endl;
    }

    void insert (int val , int pos) {
        Node* newNode = new Node (val);
        Node* temp = head ;
        for ( int i=0; i<pos ;i++) {
            temp = temp->next;
      } 
      //temp is now at pos-1
      newNode->next = temp->next;
      temp->next = newNode;
    }

    void pop_front () {
        if (head == NULL) {
            cout <<"ll is empty \n";
            return ;
        }
        Node *temp = head ;
        head = head -> next ;
        
        temp -> next = NULL;
        delete temp;
    }
    
    void pop_back () {
        Node* temp = head ;

        while (temp -> next -> next != NULL) {
            temp = temp -> next ;
        }
        temp -> next = NULL ;
        delete tail;
        tail = temp;
    }

    int searchItr( int key ) {
        Node* temp = head ;
        int idx = 0;

        while ( temp != NULL) {
            if (temp -> data == key ) {
                return idx ;
            }
            temp = temp -> next ;
            idx ++;
        }
        return -1;
    }

    void reverse () {
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL) {
            Node* next = curr->next;
            curr -> next = prev;

            //updation for next itr
            prev = curr;
            curr = next;

        }

        head = prev;
    }

    void removeNth() {
        Node* prev = head;
        
        for (int i=1 ; i<(size-n) ; i++) {
            prev = prev -> next ;
        }
        Node* toDel = prev -> next ;
        cout<< " going to delete : " << toDel -> data <<endl;

        prev -> next = prev-> next -> next;
    }
};

int main () {
    List ll;

    ll.push_front (3);
    ll.push_front (2);
    ll.push_front (1);

    ll.push_back(4);
    ll.push_back(5);

    ll.reverse();

    ll.printList();

    ll.insert(20 , 5);

    ll.printList();

    ll.pop_front();
    ll.printList();

    ll.pop_back();
    ll.printList();

    return 0;
}
