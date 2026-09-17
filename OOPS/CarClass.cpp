#include<iostream>
using namespace std;
class car{
public:
    string name;
    string color;
    int power;
    int seats;
    bool turbo;
};

int main(){
    car Tata;
    Tata.name = "Nexon";
    Tata.color = "Metallic Black";
    Tata.power = 100;
    Tata.seats = 5;
    Tata.turbo = false;

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