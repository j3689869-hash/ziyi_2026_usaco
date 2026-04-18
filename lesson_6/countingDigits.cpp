 #include <iostream>
using namespace std;

int main() {

    int n,m;
    cin >> n >> m;

    int arr[10] = {};

    for (int i = m; i <= n; i++){
    int currentNumber = i;
        while(currentNumber > 0){
            int digit = currentNumber%10;
            arr[digit]++;
            currentNumber /= 10;
        }
    }
    for(int i = 0; i <= 9; i++){
    cout << arr[i] << " ";
    }
return 0;     
}