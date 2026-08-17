#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int lo = 0; 
        int hi = arr.size() -1;

        while(lo<=hi){
            int mid = (hi+lo)/2;
            if(arr[mid]>target) hi=mid-1;
            else if(arr[mid]<target) lo=mid+1;
            else return mid;
        }
        return -1;
    }
};      //Time complexity = log n  (Very fast)