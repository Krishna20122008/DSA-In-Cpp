#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "Krishna";
    // s.push_back('Chourasia'); // Error as push_back can only push a letter
    s.push_back('c');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    s+="Chourasia";
    cout << s << endl;

    sort(s.begin(), s.end());
    cout << s << endl;

    reverse(s.begin(), s.end());
    cout << s << endl;
}