#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &printArr){
    for(int i = 0; i<printArr.size(); i++) cout << printArr[i] << " ";
}

void merge(vector<int> &arr, vector<int> &arr2, vector<int> &c){
    int i = 0, j = 0, k = 0;
    while(i<arr.size() && j<arr2.size()){
        if(arr[i]<arr2[j]) c[k++] = arr[i++];
        else c[k++] = arr2[j++];
    }
    while(i<arr.size()) c[k++] = arr[i++];
    while(j<arr2.size()) c[k++] = arr2[j++];
}

int main(){
    vector<int> arr = {90,705,1008,5008};
    vector<int> arr2 = {1,2,3,4};
    int a = arr.size();
    int b = arr2.size();
    vector<int> mergedArr(a+b);

    merge(arr,arr2, mergedArr);
    
    print(mergedArr);
}