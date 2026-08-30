#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    int fact = n;
    fact = fact*factorial(n-1);
    return fact;
}
int main(){
    cout << factorial(5);
}