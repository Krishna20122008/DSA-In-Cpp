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
};
void print(car x){
    cout << x.name << " " << x.color << " " << x.power << " " << x.seats << " " << x.turbo << endl;
}

// void change(car x){          // Here pass by value is going in the function
//     x.name = "Corolla";
// }

void change(car &x){          // Now its pass by reference
    x.name = "Corolla";
}

int main(){
    car Tata("Nexon", "Metallic Black", 344, 4, 1);
    print(Tata);
    change(Tata);
    print(Tata);
}