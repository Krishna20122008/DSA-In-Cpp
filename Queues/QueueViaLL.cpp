#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class MyQueue{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyQueue(){
        head = tail = NULL;
        length = 0;
    }
    void display(){
        Node* temp = head;
        if(head == NULL) cout << "Empty Queue!" << endl;
        else{
            while(temp!=NULL){
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void pop(){
        head = head->next;
        length--;
    }
    void push(int val){
        Node* n = new Node(val);
        if(head==NULL){
            head = tail = n;
            length++;
        }
        else{
            tail->next = n;
            tail = n;
            tail->next = NULL;
            length++;
        }
    }
    void front(){
        cout << head->val << endl;
    }
    void size(){
        cout << "Length: " << length << endl;
    }
    void empty(){
        head = tail = NULL;
        cout << "Queue is emptied!" << endl;
        length = 0;
    }
};
int main(){
    MyQueue q;
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
    q.empty();
    q.display();
    q.size();
}