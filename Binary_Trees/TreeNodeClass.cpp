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
void printTree(Node* root){
    if(root==NULL) return;
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = NULL; c->right = f; // There's no need to write c->next = NULL as in the constructor, there is default value of NULL in left and right
    e->left = g; e->right = h;

    cout << e->val << endl;
    cout << a->left->right->val << endl << endl;

    printTree(a);

    //Printing the whole binary tree:
    // cout << a->val << endl;
    // cout << a->left->val << endl;
    // cout << a->right->val << endl;
    // cout << a->left->left->val << endl;
    // cout << a->left->right->val << endl;
    // cout << a->right->right->val << endl;
}