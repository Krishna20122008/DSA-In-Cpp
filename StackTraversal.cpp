#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    while(st.size() != 0){
        cout << st.top() << " ";
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(31);       
    st.push(18);
    st.push(30);        
    st.push(76);        
    st.push(50);          

    print(st);
}