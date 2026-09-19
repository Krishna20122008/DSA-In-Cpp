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
        this->average = average;
    }
};
int main(){
    cricketer c1("Virat Kohli", 14000, 58.1);
    cricketer c2("Sachin Tendulkar", 18000, 46.7);
    cricketer c3("Rohit Sharma", 11000, 49.4);

    cricketer* ptr = &c1;
    cricketer* ptr2 = &c2;
    cout << c1.average << endl;
    cout << (*ptr).average << endl;     // Pointer usage
    cout << (*ptr2).average << endl;
}