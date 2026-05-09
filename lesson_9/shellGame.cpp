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
    }
    
    for(int start = 1; start <= 3; start++){
        int pos = start;
        int count = 0;
        for(int i = 0; i < n; i++){
           if (pos == a[i]){
                pos = b[i];
            } else if (pos == b[i]){
                pos = a[i];
            }
           if (pos == g[i]){
                count++;
            }
        } 
        answer = max(answer, count);
    } 
    cout << answer << endl;
    return 0;
}