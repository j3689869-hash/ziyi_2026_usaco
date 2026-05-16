#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

struct milkLog {
    int day;
    string name;
    int change;
};

int main() {
    int ans = 0;
    int n;
    cin >> n;

    vector<milkLog> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].day >> a[i].name >> a[i].change;
    } //fill the milk log

    sort(a.begin(), a.end(), [](milkLog x, milkLog y) {
        return x.day < y.day;
    });

    map<string, int> milk;
    milk["Bessie"] = 7;
    milk["Elsie"] = 7;
    milk["Mildred"] = 7; //starting

    set<string> display = {"Bessie", "Elsie", "Mildred"}; //names

    for (int i = 0; i < n; i++) {
        milk[a[i].name] += a[i].change;

        int maximumMilk = max({milk["Bessie"], milk["Elsie"], milk["Mildred"]}); //updates each name

        set<string> now;
        for (auto p : milk) {
            if (p.second == maximumMilk) {
                now.insert(p.first);
            }
        } //adds the cow's name into now if it equals max

        if (now != display) {
            ans++;
            display = now;
        } //changes display
    }

    cout << ans; //output
}
