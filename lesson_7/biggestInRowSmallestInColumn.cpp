#include <iostream>
using namespace std;

int main() {

    int matrix[5][5];
    int max = matrix[0][0];
    bool isFound = false;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }//input the user puts in

    for(int i = 0; i < 5; i++){
        int rowMax = matrix[i][0];
        int indexColum = 0;
        for(int j = 1; j < 5; j++){
            if(rowMax < matrix[i][j]){
                rowMax = matrix[i][j];
                indexColum = j;
            }  
        }//finds the max in one row and compare its column
        bool isMin = true;
        for (int j = 0; j < 5; j++) {
            if (matrix[j][indexColum] < rowMax) {
                isMin = false;
                break;
            }// checks coumn
        }
        if(isMin){
            cout << i + 1 << " " << indexColum + 1 << " " << matrix[i][indexColum];
            isFound = true;
        }//checks if isFound is true and what to do if isFound is true 
    }
    if(!isFound){
        cout << "not found";//if isFound is false
    }
    return 0;
}