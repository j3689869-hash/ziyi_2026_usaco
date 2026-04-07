#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;

    int day = 0;
    while(a>1){
        a /= 2;
        day++;
    }

    cout << day << endl;
    
    return 0;
}