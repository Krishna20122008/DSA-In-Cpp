#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);        // TC = O(1)
    st.push(20);
    st.push(30);
    st.pop();           // TC = O(1)
    st.push(50);
    cout << st.size() << endl;
}