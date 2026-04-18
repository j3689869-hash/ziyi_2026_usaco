#include <iostream> //helps cout print and cin input
#include <iomanip> //input output manipulation, helps provide how text 
//and number are displayed
using namespace std;

int main() {
    int n;
    cin >> n;

    /*
    int num = 1;
    for (int i = 1; i <= n; i++) { //prints every line
        int count = n - i + 1; //how many numbers in one line
        for (int j = 0; j < count; j++) { //prints every number in each line
            cout << setw(2) << setfill('0') << num; //num=1 print "01"
            num++; //add one to the number for the next loop
        }
        cout << endl;
    }
    */
   int num = 1;
   while(n>=1){
        //operation
        int count = n; // print next n numbers
        for (int j = 0; j < count; j++) { //prints every number in each line
            cout << setw(2) << setfill('0') << num; //num=1 print "01"
            num++; //add one to the number for the next loop
        }
        n--;
        cout << endl;
   }
    return 0;
}
