#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num == 2) return true;
    if (num == 1) return false;
    for (int i = 2 ; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

bool isPalindrome(int num){
    long long reverse = 0;
    int original = num;

    while(num>0){
        int currDigit = num%10;
        reverse *=10;
        reverse += currDigit;
        num /= 10;
    }
    return reverse == original;
}

int main(){

    int start, end;
    cin >> start >> end;
    
    for(int i =start ; i <= end ; i++){
        if (isPalindrome(i) && isPrime(i)){
        // if (isPalindrome(i)) {
            cout << i << endl;
        }
    }

    return 0;

}