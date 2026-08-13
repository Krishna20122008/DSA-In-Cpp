#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {5,4,3,2,1};
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 1; i<arr.size(); i++){
        for(int j=0; j<arr.size() -1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}