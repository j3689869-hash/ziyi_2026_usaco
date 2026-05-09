#include<iostream>
#include<map>
using namespace std;
int main(){

    int n;
    cin >> n;
    string names[11];
    map <string, int> money;
    for(int i = 0; i < n; i++){
        cin >> names[i];
        money[names[i]]=0;
    }
    for(int i = 0; i < n; i++){
        string giver;
        cin >> giver;
        int amount, count;
        cin >> amount >> count;
        if(count == 0){
            continue;
        }
        int each = amount/count;
        int totalGive = each * count;
        money[giver] -= totalGive;
        for(int j = 0; j < count; j++){
            string receiver;
            cin >> receiver;
            money[receiver] += each;
        }
    }
    for(int i = 0; i < n; i++){
        cout << names[i] << " " << money[names[i]] << "\n";
    }

}