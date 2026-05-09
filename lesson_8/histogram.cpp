#include <iostream>
using namespace std;
int main (){
    int arr[26] = {};
    char c;
    while(cin.get(c)){
        if (c >= 'A' && c <= 'Z') {
            arr[c - 'A']++;
        }
    }
    int maxCount = 0;
    for(int i = 0; i < 26; i++){
        if (maxCount < arr[i]){
            maxCount = arr[i];
        }
    }

    for( int i = maxCount; i >= 1; i--){
        for (int j = 0; j < 26; j++){
            if(arr[j] >= i){
                cout << "*";
            }else{
                cout << " ";
            }
            if(j == 25){
                cout << endl;
            }else{
                cout << " ";
            }
        }
    }
    for (int i = 0; i < 26; i++){
        cout << char (i + 'A');
        if (i == 25){
            cout << endl;
        }else{
            cout << " " ;
        }
    }
    return 0;
}