#include<iostream>
using namespace std;
class Student{      // User-defined Data Type
public:
    string name;
    int rno;
    float cgpa;
    void print(){
        cout << name << " " << rno << " " << cgpa << " " << endl; 
    }
};
// Or we can print through a dedicated function too:

void print(Student a){
    cout << a.name << " " << a.rno << " " << a.cgpa << endl;
}

int main(){
    Student x;      // x is an object/variable
    x.name = "Krishna";
    x.rno = 76;
    x.cgpa = 9.9;

    Student y;      
    y.name = "Swapnil";
    y.rno = 65;
    y.cgpa = 8.6;

    Student z;      
    z.name = "Sarvesh";
    z.rno = 47;
    z.cgpa = 7.9;

    cout << z.name << " " << z.rno << " " << z.cgpa << endl;
    y.print();
    print(x);
}