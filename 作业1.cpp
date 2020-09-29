#include<iostream>
#include<string>
#include<cmath>
using namespace std;
double Factorial(int i){
    double ans = 1;
    for (int i = i;i >=1;i--){
        ans *= i;
    }
    return ans;
}
double func(double x,double n){
    if (n == 1){
        return x;
    }
    else{
        double ans = pow(double(-1),n-1) * pow(x,2*n - 1) /Factorial(2 * n -1);
        return ans + func(x,n-1);
    }
}
int main(){
    double x,n;
    cin >> x >> n;
    cout << func(x,n);
    return 0;
}