//P1075
#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;
    long long p = 2 ;

    while (p * p <= n){
        if (n % p == 0) break;
        p++;
    }

    cout << n/p << "\n";
   
    return 0;
}