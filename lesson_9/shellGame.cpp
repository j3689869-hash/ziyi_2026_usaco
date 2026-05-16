#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int answer = 0;
    vector<int> a(n), b(n), g(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> g[i];
    }//iterates through each array and reads the input values for a, b, and g
    
    for(int start = 1; start <= 3; start++){
        int pos = start;
        int count = 0;
        for(int i = 0; i < n; i++){
           if (pos == a[i]){
                pos = b[i];// if the current position of the ball is under cup a, it moves to cup b
            } else if (pos == b[i]){
                pos = a[i];// if the current position of the ball is under cup b, it moves to cup a
            }
           if (pos == g[i]){
                count++;// if the current position of the ball is under the cup that g is pointing to, it counts as a correct guess
            }
        } 
        answer = max(answer, count);
    } 
    cout << answer << endl;
    return 0;
}