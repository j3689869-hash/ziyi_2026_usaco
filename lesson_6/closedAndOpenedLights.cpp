#include <iostream>
using namespace std;
    
bool opened[10000000] = {false}; 

int main(){

    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++){
        double a;
        cin >> a;
        int t;
        cin >> t;
        for(int j = 0; j < t; j++){
            double y = arr[j] * a;
            int x = (int)y;
            opened[x-1] = {true};
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
    if(!opened[i]) count++;  
    }
    cout << count;
    return 0; 
}