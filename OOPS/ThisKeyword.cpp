#include<iostream>
using namespace std;
class Pokemon{
public:
    string Name;
    string Type;
    int Power;
    Pokemon(string Name, string Type, int Power){
        this->Name = Name;      // we have to put this-> because if we don't put it, cpp will be confused and garbage values will be printed as Both variables have same names.
        this->Type = Type;
        this->Power = Power;
    }
    void print(){
        cout << Name << " " << Type << " " << Power << endl;
    }
};

int main(){
    Pokemon p1("Pikachu", "electric", 70);
    Pokemon p2("Charizard", "fire", 100);
    Pokemon p3("MewTwo", "Psychic", 200);
    p2.print();
}