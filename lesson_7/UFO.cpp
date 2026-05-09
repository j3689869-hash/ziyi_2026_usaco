#include <iostream>
using namespace std;

int main() {
    
    string comet, group;
    cin >> comet >> group;
    int groupFinal = 1;
    int cometFinal = 1;

    for(int i = 0; i < group.length(); i++){
        groupFinal *= (group[i] - 'A' + 1); 
    }

    for(int i = 0; i < comet.length(); i++){
         cometFinal *= (comet[i] - 'A' + 1); 
    }


    if(cometFinal % 47 == groupFinal % 47){
        cout << "GO";
    } else{
        cout << "STAY";
    }
    return 0;
}