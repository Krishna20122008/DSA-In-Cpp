#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0) n*=-1;
    string s = to_string(n);

    cout << "The number of digits in the entered integer is: " << s.size() << endl;
}