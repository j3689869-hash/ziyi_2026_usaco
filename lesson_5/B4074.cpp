#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int excellentSum = 0;
    int goodSum = 0;
    int passSum = 0;
    int failSum = 0;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        if(x >= 90 && x <= 100){
            excellentSum++;
        }else if(x >= 80 && x <= 89){
            goodSum++;
        }else if(x >= 60 && x <= 79){
            passSum++;
        }else{
            failSum++;
        }

    }
    cout << excellentSum << endl;
    cout << goodSum << endl;
    cout << passSum << endl;
    cout << failSum << endl;
        
    return 0;

}