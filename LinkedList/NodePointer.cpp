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
void print(Node* head){
    Node* temp = head;
    while (temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printrec(Node* head){      // This is using recursion.
    if (head==NULL) return;
    cout << head->val << " ";
    return printrec(head->next);
}
void printrev(Node* head){
    if (head==NULL) return;
    printrev(head->next);
    cout << head->val << " ";
}
int main(){
    Node* a = new Node(7);  //Head
    Node* b = new Node(0);
    Node* c = new Node(1);
    Node* d = new Node(8);
    Node* e = new Node(2);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << a << endl;
    cout << a->val << endl;
    cout << a->next->val << endl;
    cout << a->next->next->val << endl;
    cout << a->next->next->next->val << endl;
    cout << a->next->next->next->next->val << endl;

    print(a);
    print(b);           // Printing using loop
    printrec(a);        // Printing using recursion
    cout << endl;
    printrev(a);
}