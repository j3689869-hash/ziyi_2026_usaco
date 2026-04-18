#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int scores[1000];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int maxScore = scores[0], minScore = scores[0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
        if (scores[i] < minScore) minScore = scores[i];
    }

    sum = sum - maxScore - minScore;
    double avg = double(sum) / (n - 2);

    cout << fixed << setprecision(2) << avg << endl;

    return 0;
}
