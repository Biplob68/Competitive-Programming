/* You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water. 
Grid cells are connected horizontally/vertically (not diagonally). 
The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). 
The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. 
One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
Explanation: The perimeter is the 16 yellow stripes in the image above */

// Solution using dfs
class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                if(grid[i][j] == 1){
                    return dfs(grid,i,j);
                }
            }
        }
        return 0;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j){
        int row = grid.size(), col = grid[0].size();
        if(i<0 || i==row || j<0 || j==col || grid[i][j] == 0){
            return 1;
        }
        // If already visit
        if(grid[i][j] == -1) return 0;
        
        int cnt = 0;
        // Visit the land
        grid[i][j] = -1;
        
        cnt += dfs(grid, i-1, j) ;
        cnt += dfs(grid, i+1, j);
        cnt += dfs(grid, i, j-1); 
        cnt += dfs(grid, i, j+1);
        return cnt;
    }
};
