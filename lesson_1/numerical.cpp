#include <iostream>
using namespace std;

int main() {
    int n; 
   
    std::cout << "Enter a whole number: ";
    std::cin >> n; 
    
    for(int i=1; i<= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            cout << i << " " ;
        }
    }
    return 0;
}
