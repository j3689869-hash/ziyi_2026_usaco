#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[1000000/*the Collatz sequence's steps might be bigger than the number set */];// size
    arr[0] = n;
    int count = 1;

    while(n != 1){
        if(n % 2 == 1){
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
        arr[count] = n;
        count++;
    }//this while loop calculates if it is odd or not
    for(int i = count - 1/*count-1 is the last index*/; i >= 0/*stops at first element*/; i--){
        cout << arr[i] << " ";
    }//this for loop reverses the array
    return 0;
}