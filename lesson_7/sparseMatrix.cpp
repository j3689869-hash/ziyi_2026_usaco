#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[1001][1001] = {};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int row = i + 1;
            int column = j + 1;
            if(arr[i][j] > 0){
                cout << row << " " << column << " " << arr[i][j] << "\n";
            }
              
        }
    }
    
    return 0;
}