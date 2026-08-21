#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Krishna Chourasia";
    cout << s.size() << endl;
    cout << s[3] << endl;
    cout << s[4] << endl;
    cout << s << endl;

    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
}