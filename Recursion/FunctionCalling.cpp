#include<iostream>
using namespace std;

void aryan(){
    cout << "Aryan" << endl;
}
void param(){
    cout << "Param" << endl;
    aryan();
}
void kartik(){
    param();
    cout << "Kartik" << endl;
    aryan();
}
int main(){
    kartik();
    param();
    aryan();
}
