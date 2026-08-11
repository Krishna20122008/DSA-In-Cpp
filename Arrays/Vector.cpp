#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr(5);
    arr[0] = 54;
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> grr(5, 3);      // in vectors (also called dynamic arrays), if we write any number after the size of array, the value is set to default value
    grr[0] = 43;
    for (int i=0; i<5; i++){
        cout << grr[i] << " ";
    }
    cout << endl;

    grr.push_back(53);      // Adds a new element at end
    for (int i=0; i<6; i++){
        cout << grr[i] << " ";
    }
    cout << endl;
    cout << grr.size() << endl;

    grr.pop_back();         // Removes the last element
    cout << grr.size() << endl;
}