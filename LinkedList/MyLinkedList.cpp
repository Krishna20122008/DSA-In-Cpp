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
}