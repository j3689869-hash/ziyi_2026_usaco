//p1035
#include <iostream>
using namespace std;

int main(){

    int n = 0;
    int k;
    cin >> k;
    double sum = 0;

    while (sum <= k) {
        n++;
        sum += 1.0 / n;
    }

    cout << "the smallest amount of n that 1+1/2+1/3...+1/n = k is " << n << endl;
    return 0;
    // There is a bug. When k=1, the expected output should be 2. since 1/1 = 1 we should get 1/1 + 1/2 > 1
    // With very simple change, you will get it.
}