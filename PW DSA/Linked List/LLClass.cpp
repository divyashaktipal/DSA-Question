#include<bits/stdc++.h>
using namespace std;

class Node{ //Linked List Node
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{ //Linked List Node
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // display value
    void display(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    }
    // Insertion at the end
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) 
            head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // Insertion at beginning
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0)
            head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
};

int main(){
    LinkedList ll; // { }
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.display();
    cout << "Size: " <<ll.size <<endl;

    // Insertion At Beginning
    cout << "\nInsert 70 at head: ";
    ll.insertAtHead(70);
    ll.display();
}