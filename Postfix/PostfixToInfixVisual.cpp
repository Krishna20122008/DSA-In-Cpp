#include<iostream>
#include<stack>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
  public:
    string postToInfix(string &s) {
        int n = s.length();
        stack<string> st;
        
        for(int i=0; i<n; i++){
            if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='^' or s[i]=='%'){
                string b = st.top();
                st.pop();
                string a = st.top();
                st.pop();
                
                if(s[i]=='+') st.push("(" + a + "+" + b + ")");
                else if(s[i]=='-') st.push("(" + a + "-" + b + ")");
                else if(s[i]=='*') st.push("(" + a + "*" + b + ")");
                else if(s[i]=='/') st.push("(" + a + "/" + b + ")");
                else if(s[i]=='^') st.push("(" + a + "^" + b + ")");
                else if(s[i]=='%') st.push("(" + a + "%" + b + ")");
            }
            else st.push(string(1,s[i]));
        }
        return st.top();
    }
};