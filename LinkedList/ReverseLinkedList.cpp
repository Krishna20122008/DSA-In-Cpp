#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val = val;
    }
};
void print(node* head){
    node* temp = head;
    while (temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    node* prev = NULL;
    node* curr = a;
    node* fwd = curr->next;
    print(a);

    while(fwd!=NULL){
        prev = curr;
        curr = fwd;
        fwd = fwd->next;
        curr->next = prev;
    }
    a->next = NULL;
    print(curr);
}