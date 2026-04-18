#include <iostream>
#include <iomanip>  // needed for setprecision
using namespace std;

int main(){
    int n;
    cin >> n; // read how many numbers

    int arr[10000]; // declare array large enough (n can be up to 10000)
    double sum = 0; // must be double so division later gives decimals, not whole number
    
    for(int i = 0; i < n; i++){
        cin >> arr[i]; // fill array with user input
        sum += arr[i]; // add each element to sum as we go
    }

    int maxVal = arr[0]; 
    int minVal = arr[0];

    for(int i = 1; i < n; i++){ // start at 1 since 0 is already set
        if(arr[i] > maxVal /* condition to find a new max */){
            maxVal = arr[i]; // if such condition then max is now arr[i]
        }
        if(arr[i] < minVal /* condition to find a new min */){
            minVal = arr[i]; // if such condition then min is now arr[i]
        }
    }

    cout << maxVal << endl; // prints max
    cout << minVal << endl; // prints min
    cout << fixed << setprecision(2) << sum/n << endl; // prints average, fixed+setprecision(2) forces exactly 2 decimal places

    return 0;
}
