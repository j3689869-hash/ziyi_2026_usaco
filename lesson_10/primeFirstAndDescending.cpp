#include <iostream>
#include <algorithm>
using namespace std;

bool checkPrime(int m) {
    if (m < 2) return false;//not prime since it is negative
    int i = 2;
    while(i * i <= m){
        if(m % i == 0) return false;//can be divided not prime
        i++;
    }
    return true;
}// checks if prime or not

bool primeFirst(int a, int b){
    bool aPrime = checkPrime(a);//make sure it is prime
    bool bPrime = checkPrime(b);//also make sure it is prime
    if(aPrime != bPrime) return aPrime;
    return a > b;//makeing sure the format is correct
}

// prime first

int main() {
    int arr[] = {7, 2, 5, 4, 9, 6};
    int n = 6;

    sort(arr, arr + n, primeFirst);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // Output: 2 4 6 5 7 9

    return 0;
}