/* Problem : Given an m x n matrix, return all elements of the matrix in spiral order.
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int i, row = matrix.size(), col = matrix[0].size();
        
        int top = 0, bottom = row-1, left = 0, right = col-1;
        
        vector < int> v;
        int direction = 1;
        
        while(left <= right && top <= bottom){
            
            // Direction - 1 --> Left to right direction
            if(direction == 1){
                for(i=left; i<=right; i++){
                    v.push_back(matrix[top][i]);
                }
                top++;
                direction = 2;
            }
            
            // Direction - 2 --> Top to bottom direction
            else if(direction == 2){
                for(i=top; i<= bottom; i++){
                    v.push_back(matrix[i][right]);
                }
                right--;
                direction = 3;
            }
            
            // Direction - 3 --> Right to left direction
            else if(direction == 3){
                for(i=right; i>=left; i--){
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;
                direction = 4;
            }
            
            // Direction - 4 --> Bottom to top direction
            else if(direction == 4){
                for(i=bottom; i>=top; i--){
                    v.push_back(matrix[i][left]);
                }
                left++;
                direction = 1;
            }
        }
        
        return v;
}
