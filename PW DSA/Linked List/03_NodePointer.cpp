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
// print node's value
void display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// calculate size
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

// Display using recursion
// Time: O(n) && Space: O(n)

// Iterative is better than recursive bcz of space complexity.

void displayRec(Node* head){
    if(head == NULL) return; //Base
    cout << head->val << " "; //Kaam 
    displayRec(head->next); //Call
}

// Using recursion it's easy to print the nodes or linked list in 
// reverse order comparison to iterative solutions

void revDisplay(Node* head){
    if(head == NULL) return; // Base
    revDisplay(head->next); // Call
    cout << head->val << " "; // Kaam
}

//Insertion at End
void insertAtEnd(Node* head, int val){
    Node* temp = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = temp;
}
int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    //print d
    cout << "value of d: " << a->next->next->next->val <<endl;
    cout << "address of d: " << a->next->next->next;

    //print
    cout << endl << "Print value: " << endl;
    display(a);
    cout << "Size of LL is: " << size(a) << endl;

    // display val using recursion
    cout << "Display using Recursion: ";
    displayRec(a);
    
    // display val in reverse order using recursion
    cout << "\nDisplay values in reverse order using Recursion: ";
    revDisplay(a);

    // Insertion at end
    cout << "\nInserted 80 at the end: "<<endl;
    insertAtEnd(a, 80);
    display(a);

}