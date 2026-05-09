#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int matrix[101][101] = {0};
    int newMatrix[101][101] = {0};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            newMatrix[j][n-1-i] = matrix[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << newMatrix[i][j];
            if(j != n-1) {
                cout << " ";
            }else{
                cout << "\n";
            }
        }
    }
    return 0;
}