#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

    bool isValidSudoku(vector<vector<char>>& board) {
        bool cols[9][9] ={ false };
        bool rows[9][9] ={ false };
        bool boxes[9][9] ={ false };
        //There is a formula for marking boxes 
        //time : O(1)
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                //If period then skip
                if(board[i][j] =='.') {
                    continue;
                }
                int boxIndex =((i/3) * 3) + (j/3);
                
                // 0 1 2
                // 3 4 5
                //6 7 8
                
                //Why -1 ?? Because in sudoku numbers will always range from 1-9 and there will not be any number but the indexes are ranged from 0-8 so that is why
                int num= board[i][j] - '0' -1;
                if(cols[i][num] || rows[j][num] || boxes[boxIndex][num]) {
                    return false;
                }

                cols[i][num]=true; rows[j][num]=true;  boxes[boxIndex][num] = true;
        }
        }
    }

int main() {

    return 0;
}
