#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];//array to store cow heights

int main() {
    int N, B;
    cin >> N >> B;
    int curr = 0;// how tall the amount of cows is
    int amountOfCows = 0;//amount of cows stacked
    for (int i = 1; i <= N; i++) cin >> a[i];//insert cow heights
    sort(a + 1, a + N + 1, greater<int>());//sort so that you can use greedy method
    
    for (int j = 1; j < N; j++){
        curr += a[j];//add the cow heights
        amountOfCows++;// add one cow
        if(curr >= B){
            cout << amountOfCows << endl;
            break;
        }
    }
    return 0;
}