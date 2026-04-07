#include <iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;
    long long reverse = 0;
    bool isNegative = false;

    if(n<0){
        isNegative = true;
        n = -n;
    }

    while(n>0){
        int currDigit = n%10;
        reverse *=10;
        reverse += currDigit;
        n /= 10;
    }
    if(isNegative ){
        cout << -reverse;
    } else{
        cout << reverse;
    }
    return 0;
}