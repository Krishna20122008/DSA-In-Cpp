#include<iostream>
using namespace std;
int hcf(int a, int b){
    for(int i = min(a,b); i>0; i--){
        if(a%i==0 && b%i==0) return i;
    }
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The HCF of " << a << " and " << b << " is: " << hcf(a,b) << endl;
}