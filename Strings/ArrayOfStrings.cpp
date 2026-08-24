#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> arr = {"Hello", "World", "Here", "is", "the", "array"};
    for(int i=0; i<arr.size(); i++){
        cout << arr[i]<< " ";
    }
}