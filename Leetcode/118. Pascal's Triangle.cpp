/* Problem : Given an integer numRows, return the first numRows of Pascal's triangle.
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/

// Function to generate pascal'strangle 
vector<vector<int>> generate(int numRows) {
        
        vector< vector<int>> pascal(numRows);
        int row, col;
        
        for(row = 0; row<numRows; row++){
            
            // Incriment column size for every iteration
            pascal[row].resize(row + 1); 
            
            for(col = 0; col<=row; col++){
                
                // First position and last position should be 1
                if(row == col || col==0){
                    pascal[row][col] = 1;
                }
                
                // calculate sum of remaining elements from previous row  
                else {
                    pascal[row][col] = pascal[row-1][col-1] + pascal[row-1][col];
                }
            }
        }
  
        return pascal;
}
