#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << " Fizz\n";
        } else if (i % 3 != 0 && i % 5 == 0) {
            cout << i << " Buzz\n";
        } else if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " FizzBuzz\n";
        } else {
            cout << i << "\n";
        }
    }
    return 0;
}