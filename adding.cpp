#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    if(n>=1){
        long long sum = 0;
        for(int i = 1; i <= n; i++) {
            sum = sum + i;
        }
        cout << sum << endl;

    } else if(n==0){
        cout << "0" << endl;
    } else{
        long long sum = 0;
        for(int i = n; i <= -1; i++) {
            sum = sum + i;
        }
        cout << sum << endl;
    }
}
