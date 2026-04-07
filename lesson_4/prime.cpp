#include <iostream>
using namespace std;

int main(){

    int a;
    cin >> a;
    int b;
    cin >> b;

    while ( a > 0 ) {
        int c = a;
        a = b % a;
        b = c;
    }

    cout << b << endl;

    return 0;
}