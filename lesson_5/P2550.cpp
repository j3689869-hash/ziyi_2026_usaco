#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int brr[7];
    for (int i = 0; i < 7; i++){   // read 7 winning numbers
        cin >> brr[i];
    }
    
    int prizes[7] = {0};  // declare winning ticket statistics

    for (int k = 0; k < n; k++){
        int arr[7];
        int countMatchingNumbers = 0;
        for (int i = 0; i < 7; i++){   // read 7 numbers on this ticket
            cin >> arr[i];
        }
        for (int i = 0; i < 7; i++){
            for (int j = 0; j < 7; j++){   // compare against each winning number
                if (arr[i] == brr[j]) countMatchingNumbers++;//one number matches
            }
        }
     if(countMatchingNumbers >= 1){
        prizes[countMatchingNumbers - 1]++;
     }
    }
    for(int i = 6; i >= 0; i--){
        cout << prizes[i];
        if (i != 0) cout << " ";
    }// determines what prize you get
    return 0;
}