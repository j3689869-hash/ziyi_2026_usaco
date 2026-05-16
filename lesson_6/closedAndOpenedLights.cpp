#include <iostream>
using namespace std;
    
bool opened[10000000] = {}; 

int main(){

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        double a;
        cin >> a;
        int t;
        cin >> t;
        for(int j = 1; j <= t; j++){
            int x = (int)(j * a);
            opened[x] = !opened[x];
        }
    }
    // Find the open light in the status array
    for(int i = 0; i < n; i++){
        if(opened[i]) cout << i;  
    }

    return 0; 
}