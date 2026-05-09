#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    int loop = (n + 1)/2;
    int matrix[10][10] = {0};
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;


    for (int i = 0; i < loop; i++){
        for (int j = left; j <= right; j++){
            matrix[top][j] = num;
            num = num + 1;
        }
        top++;//moves right

        for (int j = top; j <= bottom; j++){
            matrix[j][right] = num;
            num = num + 1;
        }
        right--;//moves down

        for (int j = right; j >= left; j--){
            matrix[bottom][j] = num;
            num = num + 1;
        }
        bottom--;// moves left

        for (int j = bottom; j >= top; j--){
            matrix[j][left] = num;
            num = num + 1;
        }
        left++;//moves up
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matrix[i][j] < 10){
                cout << "  " <<matrix[i][j];
            }else{
             cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }// print the numbers

    return 0;
}