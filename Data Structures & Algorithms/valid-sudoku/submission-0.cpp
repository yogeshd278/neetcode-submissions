class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // check row
        for(int row = 0; row < 9; row++) {
            unordered_set<char> seen;
            for(int col = 0; col < 9; col++) {
                char value = board[row][col];

                if(value == '.') {
                    continue;
                }
                
                if(seen.count(value)) {
                    return false;
                }
                seen.insert(value);
            }
        }

        // check col
        for(int col = 0; col < 9; col++) {
            unordered_set<char> seen;
            for(int row = 0; row < 9; row++) {
                char value = board[row][col];

                if(value == '.') {
                    continue;
                }

                if(seen.count(value)) {
                     return false;   
                }
                seen.insert(value);
            }
        }

        // check 3*3
        for(int boxrow = 0; boxrow < 9; boxrow += 3) {
            for(int boxcol = 0; boxcol < 9; boxcol += 3) {
                unordered_set<char> seen;

                for(int row = boxrow; row < boxrow + 3; row++) {
                    for(int col = boxcol; col < boxcol + 3; col++) {

                        char value = board[row][col];
                        if(value == '.') {
                            continue;
                        }

                        if(seen.count(value)) {
                            return false;
                        }
                        seen.insert(value);
                    }
                }
            }
        }
        
        return true;
    }
};
