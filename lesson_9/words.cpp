#include<iostream>
#include<map>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> freq;
    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        freq[word]++;
    }
    

    return 0;
}