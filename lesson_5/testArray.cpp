#include <iostream>
using namespace std;

int main(){
    /*int arr2[5]={0 ,10};
    for(int i = 0; i < 5; i++){
        cout << arr2[i];
    }*/
    
    /*int trueCount=0;
    bool arr[5]={true,true,false,false,true};
    for(int i = 0 ; i < 5;i++){
        if(arr[i]){
            trueCount++;
        }
    }
    cout << trueCount;*/
    
    int sum = 0;

    //int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0; i < 20; i++){
        arr[i] = (i + 1)*5;
    }
    for(int i = 0; i < 20; i++){
        sum += arr[i];
    }
    cout << sum << endl;
    
    return 0;
}