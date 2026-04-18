#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // store each row's starting letter
    char rowStart[1001];
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        rowStart[i] = ch;
        for (int j = 0; j < i; j++) {
            ch = (ch == 'Z') ? 'A' : ch + 1;
        }
    }

    // print from row n down to row 1
    for (int i = n; i >= 1; i--) {
        ch = rowStart[i];
        for (int j = 0; j < i; j++) {
            cout << ch;
            if (j < i - 1) cout << " ";
            ch = (ch == 'Z') ? 'A' : ch + 1;
        }
        cout << "\n";
    }

    return 0;
}