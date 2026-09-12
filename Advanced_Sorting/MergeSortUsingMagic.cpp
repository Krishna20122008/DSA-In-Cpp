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

void mergeSort(vector<int> &arr){
    int n = arr.size();
    if(n==1) return;
    vector<int> a(n/2);
    vector<int> b(n-n/2);

    int idx = 0;

    for(int i = 0; i<n/2; i++) a[i] = arr[idx++];
    for(int i = 0; i<n-n/2; i++) b[i] = arr[idx++];
    
    mergeSort(a);
    mergeSort(b);
    merge(a,b,arr);
}
int main(){
    vector<int> arr = {5,3,6,1,6,78,65};

    mergeSort(arr);
    
    print(arr);
}