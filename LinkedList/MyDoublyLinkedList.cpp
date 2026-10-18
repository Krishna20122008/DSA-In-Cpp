#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
};

class DLL{
public: 
    Node* head;
    Node* tail;
    int length;

    DLL(){
        head = tail = NULL;
        length = 0;
    }
    void Display(){
        Node* temp = head;
        while(temp != NULL){
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
            n->prev = tail;
            tail = n;
        }
        length++;
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length==0) head = tail = n;
        else{
            head->prev = n;
            n->next = head;
            head = n;
        }
        length++;
    }
    void insertAtidx(int idx, int val){
        if(idx==0){
            insertAtHead(val);
            return;
        }
        else if(idx==length){
            insertAtTail(val);
            return;
        }

        Node* n = new Node(val);
        Node* temp = head;
        for(int i=1; i<idx; i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        n->next->prev = n;
        n->prev = temp;
    }
    void removeAtHead(){
        if(length==0) cout << "Empty list";
        else{
            head = head->next;
            head->prev = NULL;
            length--;
        }
    }
    void removeAtTail(){
        if(length==0) cout << "Empty list";
        else{
            tail = tail->prev;
            tail->next = NULL;
        }
        length--;
    }
    void removeAtIdx(int idx){
        if(idx==0) {
            removeAtHead();
            length--; 
            return;
        }
        else if(idx==length){
            removeAtTail();
            length--;
            return;
        }
        Node* temp = head;
        for(int i=1; i<idx; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;
        temp->next->prev = temp;
        length--;
    }
    void get(int idx){
        Node* temp = head;
        for(int i=1; i<=idx; i++){
            temp = temp->next;
        }
        cout << "Value is: " << temp->val << endl;
    }
};
int main(){
    DLL list;
    list.insertAtHead(10);
    list.insertAtTail(50);
    list.insertAtidx(1, 30);
    list.Display();
    list.insertAtidx(2, 60);
    list.insertAtidx(3, 80);
    list.Display();
    list.removeAtTail();
    list.Display();
    list.removeAtIdx(2);
    list.Display();
    list.get(2);
}