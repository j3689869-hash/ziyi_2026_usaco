#include <iostream>
using namespace std;

bool arr[100000000] = {false};//declares array

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i){
            arr[j] = !arr[j];
        }
    }
    for(int i = 1; i <= n; i++){
        if(arr[i]) cout << i << "\n";
    }
    return 0;
}