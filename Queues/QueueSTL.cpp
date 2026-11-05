#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int> &q){
    queue<int> helper;
    while(q.size()!=0){
        helper.push(q.front());
        cout << q.front() << " ";
        q.pop();
    }

    while(helper.size()!=0){
        q.push(helper.front());
        helper.pop();
    }
    cout << endl;
}

void push(int ele, int idx, queue<int> &q){
    queue<int> helper;
    for(int i=0; i<idx; i++){
        helper.push(q.front()); 
        q.pop();
    }
    helper.push(ele);
    while(q.size()!=0){
        helper.push(q.front());
        q.pop();
    }

    while(helper.size()!=0){
        q.push(helper.front());
        helper.pop();
    }
}

void pop(int idx, queue<int> &q){
    for(int i=0; i<idx; i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    q.pop();
    for(int i = 1; i<=q.size()-idx; i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(30);
    q.push(20);
    q.pop();
    q.push(40);
    q.push(50);
    q.push(79);
    printQueue(q);

    push(45, 2, q);
    printQueue(q);
    pop(5, q);
    printQueue(q);
}