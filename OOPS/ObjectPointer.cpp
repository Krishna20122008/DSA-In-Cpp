#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    float average;
    cricketer(string name, int runs, float average){
        this->name = name;
        this->runs = runs;
        (*this).average = average;
    }
    void print(){
        cout << name << endl << runs << endl << average << endl;
    }
};
int main(){
    cricketer c1("Virat Kohli", 14000, 58.1);
    cricketer c2("Sachin Tendulkar", 18000, 46.7);
    cricketer c3("Rohit Sharma", 11000, 49.4);

    cricketer* ptr = &c1;
    cricketer* ptr2 = &c2;
    cricketer* ptr3 = &c3;
    cout << c1.average << endl;
    cout << (*ptr).average << endl;     // Pointer usage
    cout << (*ptr2).average << endl;

    // Also, writing (*ptr).average is inconvenient
    // So we can rewrite it as:
    cout << ptr3->name << endl;  // this means -> is a pointer
    // So that means in the parameterized constructor, this-> something is actually a pointer
    // Thus, this->name = name can be rewritten as (*this).name = name

    cricketer* p = new cricketer("abc", 10000, 55.2);       // Pointer usage
    p->print();
}