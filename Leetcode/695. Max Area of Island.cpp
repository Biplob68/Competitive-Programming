/* Problem: You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) 
You may assume all four edges of the grid are surrounded by water. The area of an island is the number of cells with a value 1 in the island.
Return the maximum area of an island in grid. If there is no island, return 0.
Example : 
Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6
Explanation: The answer is not 11, because the island must be connected 4-directionally.
*/
// Solution using dfs
class Solution {
public:
    int cnt = 0, max_cnt = 0;
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int row = grid.size(), col = grid[0].size();
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; ++j){
                if(grid[i][j] == 1){
                    // call dfs for each island
                    dfs(grid, i, j);
                    // update maximum island area
                    if(cnt > max_cnt) {
                        max_cnt = cnt;
                        //cnt = 0;
                    }
                    // again set area equal to 0
                    cnt = 0;
                }
            }
        }
        return max_cnt;
    }
    
    // count area(number of 1) for each island
    void dfs(vector<vector<int>>& grid, int i, int j){
        int row = grid.size(), col = grid[0].size();
        if(i<0 || i==row || j<0 || j==col || grid[i][j] == 0) return ;
        
        grid[i][j] = 0;
        cnt++; 
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
    }
};

// Time Complexity: O(row*col) 
// Space Complexity: O(row*col)
