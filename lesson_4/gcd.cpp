#include <iostream>
using namespace std;

int main(){

    /* //euclidean theory
    int a;
    cin >> a;
    int b;
    cin >> b;

    while ( a > 0 ) {
        int c = a;
        a = b % a;
        b = c;
    }

    cout << b << endl;*/
    int a,b;
    cin >> a >> b;
    if(a < 0){
        a = -a;
    }else if(b < 0){
        b = -b;
    }
    int divisor = 1;
    int largestCommonDivisor = 1;
    while(divisor <= a && divisor <=b){
        if((a % divisor == 0) && (b % divisor == 0)){
            largestCommonDivisor = divisor;
        }
        divisor++;

    }
    cout << largestCommonDivisor << endl;
    return 0; 
}