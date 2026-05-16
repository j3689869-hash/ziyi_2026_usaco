#include <iostream>
#include <unordered_set>
#include <string>
#include <cassert>
using namespace std;

int countUniqueChars(string paragraph) {
    unordered_set<char> charSet;
    for(char c : paragraph){
        charSet.insert(c);
    }
    return charSet.size();
}

void runTests() {
    assert(countUniqueChars("") == 0);                  // empty string
    assert(countUniqueChars("hello\n") == 5);           // h,e,l,o,\n
    assert(countUniqueChars("Hello\n") == 5);           // H,e,l,o,\n
    assert(countUniqueChars("a!b@c\n") == 6);           // a,!,b,@,c,\n
    assert(countUniqueChars("a b\n") == 4);             // a,space,b,\n
    cout << "All tests passed!" << endl;
}

int main() {
    runTests();

    string paragraph = "";
    string line;
    while(getline(cin, line)){
        paragraph += line + "\n";
    }
    cout << countUniqueChars(paragraph) << endl;
    return 0;
}
