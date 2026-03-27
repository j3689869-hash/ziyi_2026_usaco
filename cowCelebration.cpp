#include <iostream>
using namespace std;

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}

int main(){
    int year;
    int celebration;

    cin >> year >> celebration;

    int count = 0;
    while (count < celebration) {
        if (isLeapYear(year)) {
            count++;
        }
        year++;
    }

    cout << year - 1 << endl;

    return 0;
}
