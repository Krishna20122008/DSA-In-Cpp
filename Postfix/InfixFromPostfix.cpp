#include<iostream>
#include<stack>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;
        
        for(string s: arr){
            if(s == "+" or s == "-" or s == "*" or s == "/" or s == "^"){
                int b = st.top();
                st.pop();
                
                int a = st.top();
                st.pop();
                
                if(s=="+") st.push(a+b);
                else if(s=="-") st.push(a-b);
                else if(s=="*") st.push(a*b);
                else if(s=="/") st.push(floor(float(a)/b));
                else if(s=="^") st.push(pow(a,b));
            }
            else st.push(stoi(s));
        }
        return st.top();
    }
};