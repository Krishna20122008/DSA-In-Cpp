#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    stack<int> temp = st;

    while(temp.size() != 0){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void reversePrint(stack<int> &st){
    stack<int> helper;
    while(st.size() != 0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size()!=0){
        cout << helper.top() << " ";
        st.push(helper.top());
        helper.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(31);       
    st.push(18);
    st.push(30);        
    st.push(76);        
    st.push(50);          

    print(st);
    print(st);
    reversePrint(st);
}