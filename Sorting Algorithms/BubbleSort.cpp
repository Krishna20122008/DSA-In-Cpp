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

    // for(int i = 1; i<arr.size(); i++){           // Less optimised
    //     for(int j=0; j<arr.size() -1; j++){
    //         if(arr[j]>arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    // for(int i = 0; i<arr.size() -1; i++){              // More optimised
    //     for(int j=0; j<arr.size() -1 -i; j++){
    //         if(arr[j]>arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    for(int i = 0; i<arr.size() -1; i++){              // Even More optimised
        int swaps = 0;
        for(int j=0; j<arr.size() -1 -i; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
        if(swaps == 0) break;
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}