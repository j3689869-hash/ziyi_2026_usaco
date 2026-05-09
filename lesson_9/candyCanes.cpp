#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long n, m;
    cin >> n >> m;
    long long current_bottom = 0;
    vector<long> vec(n);
    vector<long> vec2(m);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> vec2[j];
    }

    for (int j = 0; j < m; j++) {
        long long h = vec2[j];// the height of the candy cane
        current_bottom = 0;// the current height of the bottom of the candy cane
        for (int i = 0; i < n; i++) {
            if (current_bottom >= h) break;// if the current bottom is already higher than or equal to the height of the candy cane, we can stop eating from it
            if (vec[i] > current_bottom) {// if the current candy cane is taller than the current bottom, we can eat from it    
                long long ate = min((long long)vec[i], h) - current_bottom;// the amount of candy cane that can be eaten from the current position
                current_bottom = min((long long)vec[i], h);// update the current height of the bottom of the candy cane
                vec[i] += ate;// update the height of the current candy cane after eating from it
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << vec[i] << "\n";
    }
    return 0;
}