#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }else{
        return false;
    };

}

int main() {
    int years;
    cin >> years;
    int daysInAWeek[7] = {};
    int daysInAMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int endYear = 1900 + years;
    int day = 0;
    int order[] = {5, 6, 0, 1, 2, 3, 4};
    for (int year = 1900; year < endYear; year++){
        if (isLeapYear(year)) {
            daysInAMonth[2] = 29;
        } else {
            daysInAMonth[2] = 28;
        }

        for (int month = 1; month <= 12; month++) {
            daysInAWeek[(day + 12) % 7]++;
            day += daysInAMonth[month] % 7;
        }
    }
    for(int i = 0; i < 7; i++){
        cout  << daysInAWeek[order[i]] ;
        if (i == 6){
            cout << endl;
        }else{
            cout << " ";
        }
    }
    
    return 0;
}