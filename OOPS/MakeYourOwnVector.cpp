#include<iostream>
using namespace std;
class VectorMine{       // User Defined Data Structure   
private:
    int length;
    int* arr;
    int cap;
public:
    VectorMine(int capacity, int default_value){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i=0; i<capacity; i++){
            arr[i] = default_value;
        }
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        length--;
    }
    void push_back(int x){
        if(length==cap){    // Array is full-> then we have to make another array and copy paste elements in other
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0; i<length; i++){
                temp[i] = arr[i];
            }
            delete[] arr;   // Here we delete the elements of old arr.
            arr = temp;     // Now we increase the capacity of old array and put the elements of old array too.
        }
        arr[length++] = x;
    }
    void print(){
        for(int i=0; i<length; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    VectorMine v(5,-1); // {-1,-1,-1,-1,-1}
    // int arr[5]; Instead of doing this we can do this:
    // int* arr = new int[5];
    // arr[0] = 20; arr[1] = 10;

    // int b[] = {67, 21};
    // arr = b;
    // cout << arr[0] << endl; // Now arr is no longer holding a 5 sized array, its holding an array of size 2
    cout << v.size() << " " << v.capacity() << endl;
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.push_back(12);
    v.print();
    cout << v.size() << " " << v.capacity() << endl;
}