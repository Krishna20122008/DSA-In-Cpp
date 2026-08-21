#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: " ;
    cin >> s;
    int count = 0;

    for(int i=0; i<s.size(); i++){
        if (s[i]==97 or s[i]==101 or s[i]==105 or s[i]==111 or s[i]==117 or s[i]==65 or s[i]==69 or s[i]==73 or s[i]==79 or s[i]==85) count++;
        else continue;
    }
    cout << count << endl;
}