/* Problem: Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
*/

int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        int cnt = 0;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    eraseIsland(grid, i, j);    
                }
            }
        }
        return cnt;
}

void eraseIsland(vector<vector<char>>& grid, int i, int j){
        
        int row = grid.size(), col = grid[0].size();
        if (i < 0 || i == row || j < 0 || j == col || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        eraseIsland(grid, i - 1, j);
        eraseIsland(grid, i + 1, j);
        eraseIsland(grid, i, j - 1);
        eraseIsland(grid, i, j + 1);
        
}
