#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    stack<int> helper ;

    while(st.size() != 0){
        cout << st.top() << " ";
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() != 0){
        st.push(helper.top());
        helper.pop();
    }
    cout << endl;
}

void push(int idx, int val, stack<int> &st){
    stack<int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
}

void pop(int idx, stack<int> &st){
    stack<int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    helper.pop();
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
    }
}

void get(int idx, stack<int> &st){
    stack<int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    cout << helper.top() << endl;
    while(helper.size()!=0){
        st.push(helper.top());
        helper.pop();
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

    push(4, 67, st);
    print(st);

    pop(2, st);
    print(st);

    get(3, st);
    get(1, st);
}