#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "xyz";
    
    if(s1==s2) cout << "Same" << endl;
    else cout << "Not same" << endl;

    string s3 = "abc";
    string s4 = "xyz";
    
    if(s3!=s4) cout << "Same" << endl;
    else cout << "Not same" << endl;

    string s5 = "abc";
    string s6 = "xyz";
    
    if(s5>s6) cout << s5 << " is greater than" << s6 << endl;
    else cout << s6 << " is greater than " << s5 << endl;
}