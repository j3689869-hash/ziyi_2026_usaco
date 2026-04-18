#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << setw(2) << setfill('0') << num++;
        }
        cout << endl;
    }

    return 0;
}
