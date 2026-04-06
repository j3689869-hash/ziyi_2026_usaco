#include <iostream>
using namespace std;

int main(){

    double target;
    double initialStep = 2;
    double totalDistance = 0;
    int stepNumber = 0;
    

    cout << "Enter a positive number that is between 0 and 100: ";
    cin >> target;

    while (target <= 0 || target >= 100) {
        cout << "Invalid!!! Enter a positive number that is between 0 and 100: ";
        cin >> target;
    }

    while (totalDistance <= target) {
        totalDistance += initialStep;
        initialStep *= 0.98;
        stepNumber++;
    }

    cout << "Total steps needed to reach " << target << " is " << stepNumber  << endl;
    return 0;
}