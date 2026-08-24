#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Krishna";
    string sub = s.substr(0,4);
    cout << s << endl;
    cout << sub << endl;    // Here when we start from 0 index then it works till n-1 index

    cout << s.substr(1,4) << endl;      // But as soon as we put any other number it works till n index
    cout << s.substr(4) << endl;        // From 4 to end
}