#include <iostream>
using namespace std;

int main(){

    int n = 0;
    int factorial = 1;

    while (factorial <= 2000) {
        n++;
        factorial *= n;
    }

    cout << "n= " << n << endl;
    return 0;
}