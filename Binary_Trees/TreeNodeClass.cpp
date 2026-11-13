#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = NULL; c->right = f; // There's no need to write c->next = NULL as in the constructor, there is default value of NULL in left and right

    cout << e->val << endl;
    cout << a->left->right->val << endl;
}