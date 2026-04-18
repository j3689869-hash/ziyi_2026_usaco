#include <iostream>
using namespace std;

int main(){

    int arr[1000001];
    int n = 0;

    int x;
    while(cin >> x && x != 0){//user insert x and if x is 0 than it reruns
        arr[n] = x;//stores x
        n++;//move to the next index to store
    }
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i];
        if(i != 0) cout << " " ;//prints space between elements
    }//prints all numbers in reverse except the 0
    return 0;
}