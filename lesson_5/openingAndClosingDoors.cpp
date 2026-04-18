#include <iostream>
using namespace std;

//bool arr[100000000] = {false};//declares array

int main(){
    int n;
    cin >> n;

    /*for(int i = 1; i <= n; i++){
       for (int j = i; j <=n; j += i){
            if(j % i == 0){arr[j] = !arr[j];}
       }
    }*/
    for(int i = 1; i * i <= n; i++){
    cout << i * i << "\n";
    }


    return 0;
}