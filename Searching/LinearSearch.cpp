#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout << "Enter the target to search: ";
    cin >> target;
    bool found = false;

    vector<int> arr = {3,6,1,8,-4,-10};
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            cout << "Target is present at index: " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Target not found.." << endl;
    }
    
}