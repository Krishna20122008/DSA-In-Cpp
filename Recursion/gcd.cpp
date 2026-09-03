#include<iostream>
using namespace std;
// int hcf(int a, int b){
//     for(int i = min(a,b); i>0; i--){
//         if(a%i==0 && b%i==0) return i;       TC: O(n)
//     }
// }
int hcf(int a, int b){
    if(a==0) return b;
    return hcf(b%a, a);
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The HCF of " << a << " and " << b << " is: " << hcf(a,b) << endl;
}