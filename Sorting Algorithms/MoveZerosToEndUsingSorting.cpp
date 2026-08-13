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
    vector<int> arr = {9,0,-2,-7,0,4,-4,0,1,0,5};
    print(arr);
    cout << endl;

    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    print(arr);
}

// TC = O(n^2)