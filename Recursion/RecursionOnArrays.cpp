#include<iostream>
#include<vector>
using namespace std;
void printrec(vector<int> &arr, int idx){
    if(idx==arr.size()) return;
    cout << arr[idx] << " ";
    printrec(arr, idx+1);
}
int main(){
    vector<int> arr = {1,52,53,143,6432,1203};
    printrec(arr,0);
}