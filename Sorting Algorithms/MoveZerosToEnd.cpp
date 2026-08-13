#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> arr = {9,0,-2,-7,0,4,-4,0,1,0,5};
    int zeros = 0;
    print(arr);
    cout << endl;
    for(int i=0; i<arr.size(); i++){
        if (arr[i]==0) zeros++;
    }
    int zero = 0;
    arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());

    for(int i=0; i<zeros; i++){
        arr.push_back(zero);
    }
    print(arr);

}

// TC = O(n)