#include<iostream>
using namespace std;
class car{
public:
    string name;
    string color;
    int power;
    int seats;
    bool turbo;
    car(string n, string c, int p, int s, bool t){      // Parameterized constructor
        name = n;
        color = c;
        power = p;
        seats = s;
        turbo = t;
    }
    car(){  // Default constructor

    }
};

int main(){
    car Tata("nexon", "color", 344, 4, 1);

    cout << Tata.name << endl;
    cout << Tata.color << endl;
    cout << Tata.power << endl;
    cout << Tata.seats << endl;
    cout << Tata.turbo << endl;

    car Mahindra = {"XEV 9E", "White", 300, 5, true};
    cout << Mahindra.name << endl;
    cout << Mahindra.color << endl;
    cout << Mahindra.power << endl;
    cout << Mahindra.seats << endl;
    cout << Mahindra.turbo << endl;
}