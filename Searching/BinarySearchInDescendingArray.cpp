#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {8,6,3,1,-4,-10};
    int n = arr.size();
    int lo = n-1;
    int hi = 0;
    int target;
    cout << "enter the target to find: ";
    cin >> target;

    while(lo>=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]>target) hi = mid+1;
        else if(arr[mid]<target) lo = mid-1;
        else {
            cout << mid << endl;
            break;
        }    

    }
}