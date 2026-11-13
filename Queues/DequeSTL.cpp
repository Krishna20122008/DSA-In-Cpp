#include<iostream>
#include<queue>
using namespace std;
void print(deque<int> &dq){
    for(int i=0; i<dq.size(); i++){
        cout << dq.front() << " ";
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << endl;
}
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(50);
    print(dq);
}