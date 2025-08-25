#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    float marks;

    // constructor
    // Student(string n, int rNo, int m){
        // name = n;
        // rollNo = rNo;
        // marks = m;
    // }

    // this-> pointer
    // used to access directly means without changing the variable name

    Student(string name, int rollNo, float marks){
        // this-> is a pointer. Ex:
        (*this).name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
};
void change(Student &s){
    s.name = "Harsh";
}
int main(){
    // Student s;
    // s.name = "Divyashakti";
    // s.rollNo = 3;
    // s.marks = 88.2;

    // printing using constructor 
    Student s("Divyashakti", 3, 88.2);
    cout << s.name << " " << s.rollNo << " " << s.marks << endl;

    // change(s);
    // cout << s.name << " " << s.rollNo << " " << s.marks << endl;

    Student *ptr = &s;
    // (*ptr).name = "Harsh";
    ptr->name = "Harsh"; 
    cout << s.name << endl;



}