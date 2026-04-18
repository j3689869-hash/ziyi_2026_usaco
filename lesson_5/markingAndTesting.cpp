#include <iostream>
using namespace std;

int main(){
    int arr[10/*array size*/]={5,10,15,20,25,30,35,40,45,50};//elements in a array

    int maxVal = arr[0];// what the max is right now

    for(int i = 1; i < 10; i++) {
        if(arr[i] > maxVal/*condition to find a new max*/){
            maxVal = arr[i];//if such condition than max is now arr[i]
        }
    }
    cout << maxVal << endl;//prints max
return 0;
}

#include <iostream>
using namespace std;

int main(){
    int arr[10/*array size*/]={5,10,15,20,25,30,35,40,45,50};//elements in a array

    int minVal = arr[0];// what the min is right now

    for(int i = 1; i < 10; i++) {
        if(arr[i] < minVal/*condition to find a new min*/){
            minVal = arr[i];//if such condition than min is now arr[i]
        }
    }
    cout << minVal << endl;//prints min
return 0;
}