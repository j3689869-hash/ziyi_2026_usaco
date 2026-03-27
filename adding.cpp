#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    if(n>=1){
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << endl;

    } else if(n==0){
        cout << "0" << endl;
    } else{
        int sum = 0;
        for(int i = n; i <= -1; i++) {
            sum += i;
        }
        cout << sum << endl;
    }
}
