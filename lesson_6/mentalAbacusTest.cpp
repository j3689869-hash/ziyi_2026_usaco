 #include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[1000] = {};
    bool booArr[n] = {};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int counting = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int sum = arr[i] + arr[j];
                for(int k = 0; k < n; k++){
                if(arr[k] == sum && !booArr[k]){
                  counting++;  
                  booArr[k] = true;
                }
            }
        }
    }
    cout << counting << " ";
    return 0;     
}