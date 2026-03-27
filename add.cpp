#include <iostream>
using namespace std;

long long addAllPositives(int n){
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {

    int n;
    cin >> n;

    long long sum;
    if (n > 0) {
        sum = addAllPositives(n);
    } else {
        sum = -addAllPositives(-n);
    }
    cout << sum << endl;
}