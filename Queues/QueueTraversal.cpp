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
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    printQueue(q);
}