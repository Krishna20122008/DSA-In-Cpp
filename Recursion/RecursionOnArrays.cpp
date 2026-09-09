#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int> &arr, int idx){
    if(idx==arr.size()) return;
    cout << arr[idx] << " ";
    printArr(arr, idx+1);
}
void printArrReverse(vector<int> &arr, int idx){
    if(idx==arr.size()) return;
    printArrReverse(arr, idx+1);
    cout << arr[idx] << " ";
}
int main(){
    vector<int> arr = {1,52,53,143,6432,1203};
    printArr(arr,0);
    cout << endl;
    printArrReverse(arr,0);
}