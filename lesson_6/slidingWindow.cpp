#include <iostream>
using namespace std;
    

int main(){

    int n, m;
    cin >> n >> m;
    int arr[3001] = {};
    int minSum;
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++){
        sum += arr[i];
    }
    minSum = sum;
    for(int i = m; i < n; i++){
        sum = sum + arr[i] - arr[i-m];
        if(minSum > sum){
            minSum = sum;
        }
    }
    cout << minSum;

    return 0; 
}