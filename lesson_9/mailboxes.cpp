#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string mailbox;
    cin >> mailbox;
    int start = 0;
    for(int k = 1; k <= n; k++){
        unordered_set<string> store;
        for (int index = 0; index + k <= n; index++) {
            store.insert(mailbox.substr(index,k)); 
        }
        
        if (store.size() == n - k + 1) {
            cout << k;
            break;
        }
    }
    return 0;
}