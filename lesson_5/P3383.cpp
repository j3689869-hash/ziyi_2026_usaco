#include <iostream>
using namespace std;

bool isComposite[100000001] = {false};  // global, false = prime
int primes[6000000];
int count = 0;

int main(){
    int n, q;
    cin >> n >> q;

    // sieve of eratosthenes
    for(int i = 2; i <= n; i++){
        if(!isComposite[i]){            // if i is prime
            primes[count++] = i;        // store it
            for(long long j = (long long)i*i; j <= n; j += i){  // mark multiples
                isComposite[j] = true;
            }
        }
    }

    for(int i = 0; i < q; i++){
        int k;
        cin >> k;
        cout << primes[k-1] << "\n";
    }

    return 0;
}
