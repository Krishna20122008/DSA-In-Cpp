#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin >> a;       // Here if we enter a sentence with spaces then only the first word will print
    cout << a;
    cout << endl;

    cin.ignore(10000, '\n');

    string b;
    getline(cin, b);
    cout << b;
}