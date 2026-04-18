#include <iostream>
using namespace std;
    

int main(){

   int n;
   cin >> n;
   int arraySize = n*n;
   int globalCounting = 0;
    bool isZero = true;

    while(globalCounting < arraySize){
        int curr;
        cin >> curr;
        for(int i = 0; i < curr; i++){
            globalCounting++;
            if (isZero){
                cout << 0;
            }else{
                cout << 1;
            }
            if(globalCounting % n == 0){
                cout << "/n";
            }
        }
        isZero = !isZero;
    }

    return 0; 
}