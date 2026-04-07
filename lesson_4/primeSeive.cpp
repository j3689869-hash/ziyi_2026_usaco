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

int main(){

    int n;
    cin >> n;
    
    for(int i =0 ; i < n ; i++){
        int x;
        cin >> x;
        if(isPrime(x)) {
            cout << x << " ";
        }
    }

    return 0;

}