#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> k >> n;
    int answer = 0;
    int arr[21][21] ={};
    for(int amount = 1; amount <= k; amount++){
        for(int rank = 1; rank <= n; rank++){
            int cow;
            cin >> cow;
            arr[amount][cow] = rank;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            bool iBetter = true;
            bool jBetter = true;
            for(int m = 1; m <= k; m++){
                if(arr[m][i] > arr[m][j]){
                    iBetter = false;
                }
                if(arr[m][j] > arr[m][i]){
                    jBetter = false;
                }
            }
            if(iBetter || jBetter){
            answer++;
            }
        }
    } 
    cout << answer << endl;
    return 0;
}