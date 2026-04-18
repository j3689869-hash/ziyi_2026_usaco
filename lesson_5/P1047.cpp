#include <iostream>
using namespace std;

int main(){

    int amountOfRegion,lengthOfRoad;
    cin >> lengthOfRoad >> amountOfRegion;

    bool removed[10000000] = {false}; //trees at the start(not removed yet)

    for(int i = 0; i < amountOfRegion; i++){
        int u,v;
        cin >> u >> v;//start and end of a region
        for(int j = u; j <= v; j++ ){
            removed[j] = true;//how many trees are removed
        }
    }
    
    int treesStillStanding = 0;
    for(int i = 0; i <= lengthOfRoad; i++){
    if(!removed[i]) treesStillStanding++;
    }//counts how many trees are still standing

    cout << treesStillStanding;// ouput

    return 0; 
}