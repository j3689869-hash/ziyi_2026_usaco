#include<iostream>
#include<map>
using namespace std;
int main(){
    /*long n, m;
    cin >> n >> m;
    long count = 0;
    long arr[200001] = {};
    for (long i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (long i = 0; i < n; i++){
        for (long j = 0; j < n; j++){
            if (arr[i] - arr[j] == m){
               count++;
            }
    
        }
    }
    cout << count << endl;*/
    long n, c;
    cin >> n >>  c;
    long pairs = 0;
    map<long, long> freq;
    for (long i = 0; i < n; i++){
        long x;
        cin >> x;
        freq[x]++;// counts the frequency of each value in the input and stores it in a map
    }
    for (auto entry : freq){
        long val = entry.first;// the current value
        long cnt = entry.second;// the frequency of the current value
        if (freq.count(val - c)/* checks if the value that is c less than the current value exists in the map*/){
            pairs += cnt * freq[val - c];// how many times does this pair apears
        }
    }
    cout << pairs << endl;
    return 0;
}