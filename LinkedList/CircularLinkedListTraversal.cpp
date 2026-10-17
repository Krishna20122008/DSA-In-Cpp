/* Structure of circular linked list node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
    }
};
class Solution {
  public:
    void printList(Node* head) {
        Node* temp = head;
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != head);
    }
};