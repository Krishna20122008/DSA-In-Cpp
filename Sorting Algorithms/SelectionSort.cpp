#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> arr = {9,-2,-7,4,-4,1,5};
    print(arr);
    cout << endl;
    int size = arr.size();
    
    for(int i=0; i<size; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    print(arr);
}