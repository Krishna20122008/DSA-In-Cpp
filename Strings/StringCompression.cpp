#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int i = 0, j = 0;
    string ans = "";
    string s = "";
    cout << "Enter the string: ";
    cin >> s;
    int n = s.length();

    while(j<n){
        if(s[i]==s[j]) j++;
        else{
            ans+=s[i];
            if((j-i)!=1){
                ans+=to_string(j-i);
            }
            i = j;
        }
    }
    ans+=s[i];
    if((j-i)!=1){
        ans+=to_string(j-i);
    }

    cout << ans;
}