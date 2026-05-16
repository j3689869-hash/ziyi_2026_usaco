#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

set<char> singleWinners;
set<pair<char,char>> pairWinners;

void checkLine(char a, char b, char c) {
    unordered_set<char> letters = {a, b, c};
    if(letters.size() == 1){
        singleWinners.insert(a);
    }
    if(letters.size() == 2){
        pairWinners.insert({min({a,b,c}), max({a,b,c})});
    }
}

int main() {
    char board[3][3];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            cin >> board[i][j];

    // 3 rows
    checkLine(board[0][0], board[0][1], board[0][2]);
    checkLine(board[1][0], board[1][1], board[1][2]);
    checkLine(board[2][0], board[2][1], board[2][2]);

    // 3 columns
    checkLine(board[0][0], board[1][0], board[2][0]);
    checkLine(board[0][1], board[1][1], board[2][1]);
    checkLine(board[0][2], board[1][2], board[2][2]);

    // 2 diagonals
    checkLine(board[0][0], board[1][1], board[2][2]);
    checkLine(board[0][2], board[1][1], board[2][0]);

    cout << singleWinners.size() << "\n" << pairWinners.size();
}
