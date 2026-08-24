#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string s = to_string(n);

    cout << "The number of digits in the entered integer is: " << s.size() << endl;
}