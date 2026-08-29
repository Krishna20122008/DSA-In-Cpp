#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "";
    cout << "Enter a string: ";
    getline(cin, s);
    int MaxFreq = 0;
    for(int i = 0; i<s.size(); i++){        // TC : O(n^2)
        int max = 0;
        for(int j = 0; j<s.size(); j++){
            if(s[i]==' ') i++;
            if(s[i]==s[j]) max++;
            if(MaxFreq<max) MaxFreq = max;
        }
    }
    cout << "Max Frequency of a character is: " << MaxFreq << endl;
}