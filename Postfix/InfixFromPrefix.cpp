#include<iostream>
#include<stack>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
  public:
    int evaluatePrefix(vector<string>& arr) {
        int n = arr.size();
        stack<int> st;
        
        for(int i=n-1; i>=0; i--){
            if(arr[i]=="+" or arr[i]=="-" or arr[i]=="*" or arr[i]=="/" or arr[i]=="^"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if(arr[i]=="+") st.push(a+b);
                else if(arr[i]=="-") st.push(a-b);
                else if(arr[i]=="*") st.push(a*b);
                else if(arr[i]=="/") st.push(floor(float(a)/b));
                else if(arr[i]=="^") st.push(pow(a,b));
            }
            else st.push(stoi(arr[i]));
        }
        return st.top();
    }
};