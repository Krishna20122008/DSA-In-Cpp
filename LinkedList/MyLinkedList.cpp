#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
    }
};
class MyLinkedList{
public:
    Node* head;
    Node* tail;
    int length;
    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }
    void Display(){
        Node* temp = head;
        while (temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length==0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length==0) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        length++;
    }
    void removeAtHead(){
        head = head->next;
        length--;
    }
    void insert(int val, int idx){
        if(idx==0){
            insertAtHead(val);
            return ;
        }
        if(idx==length){
            insertAtTail(val);
            return;
        }

        Node* n = new Node(val);
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }
    void get(int idx){
        Node* temp = head;
        for(int i=0; i<idx; i++){
            temp = temp->next;
        }
        cout << "The value is: " << temp->val << endl;
    }
    void remove(int idx){
        if(idx==0) {
            removeAtHead();
            return;
        }
        if(idx<0 or idx>=length) {
            cout << "Invalid index" << endl;
        }
        Node* temp = head;
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        Node* ToBeDeleted = temp->next;
        temp->next = temp->next->next;
        if(idx==length-1) tail = temp; 
        delete ToBeDeleted;
        length--;
    }
};

int main(){
    MyLinkedList list;
    list.insertAtTail(80);
    list.insertAtTail(30);
    list.insertAtTail(50);
    list.insertAtHead(20);
    list.insertAtHead(10);
    list.removeAtHead();
    list.Display();
    list.insert(69,3);
    list.insert(69,5);
    list.Display();
    list.get(4);
    list.remove(3);
    list.Display();
}