/* Problem: Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.
A region is captured by flipping all 'O's into 'X's in that surrounded region.

Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]
Explanation: Surrounded regions should not be on the border, which means that any 'O' on the border of the board are not flipped to 'X'. Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. Two cells are connected if they are adjacent cells connected horizontally or vertically.
*/

// Solution using dfs
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        
        //if(row == 0) return;
        // traverse 1st and last column only
        for(int i=0; i<row; ++i){
            if(board[i][0] == 'O') dfs(board, i, 0);
            if(board[i][col-1] == 'O') dfs(board, i, col-1);
        }
        
        // traverse 1st and last row only
        for(int i=0; i<col; ++i){
            if(board[0][i] == 'O') dfs(board, 0, i);
            if(board[row-1][i] == 'O') dfs(board, row-1, i);
        }
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; ++j){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == '#') board[i][j] = 'O';
            }
        } 
    }
    
    void dfs(vector<vector<char>>& board, int i, int j){
        
        int m = board.size(), n = board[0].size();
        if (i < 0 || i == m || j < 0 || j == n || board[i][j] != 'O') {
            return;
        }
        
        board[i][j] = '#';
        
        dfs(board, i - 1, j);
        dfs(board, i + 1, j);
        dfs(board, i, j - 1);
        dfs(board, i, j + 1);
        
    }
    
};
