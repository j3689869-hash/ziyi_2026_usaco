#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumD = 0;//sum of the first diagonal
    int sumRd = 0;//sum of the second diagonal
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp;
            cin >> temp;
            if(i == j){
                sumD += temp;
            }//checks to see if to add the sum of the first diagonal 
            if (n - i - 1 == j){
                sumRd += temp;
            }// similar checks to see if to add the sum of the second diagonal
        }
    }
    
    cout << sumD << " " << sumRd;//output
    
    return 0;
}