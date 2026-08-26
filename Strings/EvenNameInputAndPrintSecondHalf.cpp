#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "";
    cout << "Enter any even name: ";
    cin >> s;

    int mid = s.size() /2;
    cout << s.substr(mid) << endl;
}