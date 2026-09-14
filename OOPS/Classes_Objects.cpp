#include<iostream>
using namespace std;
class Student{      // User-defined Data Type
public:
    string name;
    int rno;
    float cgpa;
};
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
}