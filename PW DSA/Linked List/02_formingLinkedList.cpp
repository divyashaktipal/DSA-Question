// Forming Linked List

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; // set default address to NULL
    }
};
int main()
{
    // 10 20 30 40

    // Node a;
    // a.val = 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val = 30;
    // Node d;
    // d.val = 40;

    // you can pass val as a constructor
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming LL
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // d.next = NULL;

    // cout << a.next << endl; // garbage address
    // cout << b.val << endl; // 20

    // changing value of b
    // Node *ptr = &b;
    // cout << b.val << endl; // 20
    // (*ptr).val = 60; // ptr->val = 60
    // cout << b.val << endl; //60

    // you can also print through a pointer
    // cout << (*(a.next)).val << endl; // 20
    // or
    // cout << (a.next)->val << endl;

    // you can also change the value of b using a's pointer
    // a.next->val = 70;
    // cout << b.val <<endl; //(a.next)-> val; //70

    // print karni hai d tak ki element
    // cout << (*((*((*(a.next)).next)).next)).val << endl; // 40
    // or
    // cout << (((a.next)->next)->next) -> val << endl; // 40


    // print using loop
    Node temp = a;
    cout << "using loop: "<< endl;
    // while(temp.next != NULL){ // 10 20 30
    while(1){
        cout << temp.val << " ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }

    return 0;
}