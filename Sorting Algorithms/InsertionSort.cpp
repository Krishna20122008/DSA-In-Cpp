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

    for(int i=1; i<size; i++){
        int j=i; 
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    print(arr);
}