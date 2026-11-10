#include<iostream>
#include<vector>
using namespace std;
class Queue{
private: 
    int length;
    int f;
    int r;
    vector<int> arr;
public:
    Queue(int capacity){
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity, 0);
    }
    void push(int val){
        if(r>=arr.size()){
            r = 0;
        }
        arr[r] = val;
        r++;
        length++;
    }
    void pop(){
        if(length==0){
            cout << "Queue is empty!" << endl;
            return;
        }
        f++;
        length--;
    }
    void front(){
        if(length==0){
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << arr[f] << endl;
    }
    void size(){
        cout << length << endl;
    }
    void capacity(){
        cout << arr.size() << endl;
    }
    void display(){
        if(length==0){
            cout << "Queue is empty!" << endl;
            return;
        }
        if(r<=f){
            for(int i=f; i<arr.size(); i++){
                cout << arr[i] << " ";
            }
            for(int i=0; i<r; i++){
                cout << arr[i] << " ";
            }
        }
        else{
            for(int i = f; i<r; i++){
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.pop();
    q.pop();
    q.display();
    q.front();
    q.size();
    q.display();
    q.size();
}   