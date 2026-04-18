#include <iostream>
using namespace std;

int main(){
   /* int height;
    cin >> height;
    int pickableApples = 0;

    for(int i = 0 ; i < 10 ; i++){
        int heightOfApples;
        cin >> heightOfApples;
        if(heightOfApples <= height+30){
            pickableApples++;
        }
    } */
   int heightOfApples[10];
    for(int i = 0; i < 10; i++){
    cin >> heightOfApples[i];  // read all apple heights first
    }

    int height;
    cin >> height;  // then read person's height

    int pickableApples = 0;
    for(int i = 0; i < 10; i++){
    if(heightOfApples[i] <= height + 30){
        pickableApples++;
    }
    }
    cout << pickableApples << endl;
    return 0;
}