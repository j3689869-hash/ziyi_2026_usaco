#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sign = (n < 0) ? -1 : 1;
    n = abs(n);

    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    cout << sign * reversed << endl;
    return 0;
}