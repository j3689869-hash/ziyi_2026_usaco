#include <iostream>
#include <algorithm>
using namespace std;

bool evenFirst(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) return true;   // a even, b odd → a first
    if (a % 2 != 0 && b % 2 == 0) return false;  // a odd, b even → b first
    return a < b;                                  // both even or both odd → sort normally
}

bool oddFirst(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) return false;   // a even, b odd → a first
    if (a % 2 != 0 && b % 2 == 0) return true;  // a odd, b even → b first
    if (a % 2 == 0 && b % 2 == 0) return a < b; 
    return a > b;
}

// prime first

int main() {
    int arr[] = {7, 2, 5, 4, 9, 6};
    int n = 6;

    sort(arr, arr + n, oddFirst);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Output: 2 4 6 5 7 9

    return 0;
}
