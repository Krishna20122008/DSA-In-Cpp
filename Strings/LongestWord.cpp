#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Printing is the basic thing to learn in C++ programming language";
    int i = 0, j = 0, wordCount = 0;
    string word;

    while(j<s.length()){
        if(s[j]!=' '){
            j++;    
        }
        else{
            int len = j-i;
            if(len>wordCount) wordCount = len;
            word = s.substr(i, len);
            i = j;
            while(i<s.length() && s[i]==' '){
                i++;
                j++;
            }
        }
    }
    cout << word << " is of the largest length: " << wordCount << endl; 
}