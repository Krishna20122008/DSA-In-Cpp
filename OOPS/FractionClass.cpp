#include<iostream>
using namespace std;
class fraction{
public:
    int num;
    int den;
    fraction(int num, int den){
        this->num = num;
        this->den = den;
    }
    fraction(){     // Default parameter

    }
    void print(){
        cout << num << "/" << den << endl;
    }
};
fraction multiply(fraction &f1, fraction &f2){
    fraction ans;
    ans.num = f1.num*f2.num;
    ans.den = f1.den*f2.den;
    return ans;
}
fraction addition(fraction &f1, fraction &f2){
    fraction ans;
    if(f1.den==f2.den) {
        ans.den = f1.den;
        ans.num = f1.num+f2.num;
        return ans;
    }
    else {
        ans.den = f1.den*f2.den;
        ans.num = (f1.num*f2.den)+(f2.num*f1.den);
        return ans;
    }
}
int hcf(int a, int b){
    if(a==0) return b;
    return hcf(b%a, a);
}

fraction simplify(fraction &f1){
    if(f1.num % f1.den==0) {
        fraction ans;
        ans.num = f1.num / f1.den;
        ans.den = 1;
        return ans;
    }
    else{
        int factor = hcf(f1.num, f1.den);
        fraction ans;
        ans.num = f1.num/factor;
        ans.den = f1.den/factor;
        return ans;
    }
}
int main(){
    fraction f1(2,5);
    fraction f2(3,5);
    fraction f3(35,45);
    fraction MultiplyAns = multiply(f1,f2);
    fraction AdditionAns = addition(f1,f2);
    fraction SimplifyAAns = simplify(AdditionAns);
    fraction SimplifyMAns = simplify(MultiplyAns);
    fraction Simplifyf3 = simplify(f3);
    f1.print();
    f2.print();
    MultiplyAns.print();
    AdditionAns.print();
    SimplifyAAns.print();
    SimplifyMAns.print();
    Simplifyf3.print();
}