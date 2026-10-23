#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyStack{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        if(head==NULL){
            Node* n = new Node(val);
            head = tail = n;
            length++;
        }
        else{
            Node* n = new Node(val);
            n->next = head;
            head = n;
            length++;
        }
    }
    void pop(){
        head = head->next;
        length--;
    }
    int get(){
        return head->val;
    }
    int size(){
        return length;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    MyStack st;
    st.push(50);
    st.push(10);
    st.push(20);
    st.push(60);
    cout << "Size is: " << st.size() << endl;
    st.display();
    
    st.pop();
    cout << "Size is: " << st.size() << endl;
    st.display();
}