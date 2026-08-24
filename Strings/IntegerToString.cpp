#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    // string s = to_string(n);  // Using BuiltIn Fn
    string s = "";

    while(n!=0){
        int lastDigit = n%10;
        n/=10;
        char ch = lastDigit+48;
        s.push_back(ch);
    }

    reverse(s.begin(), s.end());
    cout << s << "";
}