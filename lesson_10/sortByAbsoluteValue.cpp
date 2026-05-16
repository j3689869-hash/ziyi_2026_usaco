#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool byAbsoluteValue(int a, int b) {
    return abs(a) < abs(b);  // sort by |value|, small to large
}

bool byEvenFirst(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) return true;
    if (a % 2 != 0 && b % 2 == 0) return false;
    if (a % 2 != 0 && b % 2 != 0) return a > b;
    return a < b;
}

bool byMode5(int a, int b) {
    return (a%5) < (b%5);
}

int main() {
    int arr[] = {-5, 3, -8, 2, -1};
    int n = 5;

    sort(arr, arr + n, byEvenFirst);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Possible output: 2 -1 3 -5 -8  (order of equal |values| may vary)

    return 0;
}
