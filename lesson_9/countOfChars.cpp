#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    string original, destroy;
    cin >> original >> destroy;

    map <char, int> amount;

    for(char c : original){
        amount[c]++;
    }

    for(char c : destroy){
        amount[c]--;
    }

    for(auto& p : amount){
        if(p.second > 0){cout << p.first << " " << p.second << endl;}
    }
    return 0;
}