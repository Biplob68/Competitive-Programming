/* Problem: Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.
Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]
*/

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
		if (matrix.empty()) return {};
		vector<int>res;
            
		int row = matrix.size(), col = matrix[0].size();
            
    for (int i = 0; i < row + col - 1; i++) { 
      
        // for the lower arrow
		  	if (i%2 == 1) {
			     	for (int j = min(i, col - 1); j >= max(i - row + 1, 0); j--){
					      res.push_back(matrix[i - j][j]);
            }
		  	} 
        // For the upper arrow  
        else {
				   for (int j = max(i - row + 1, 0); j <= min(i, col - 1); j++){
					     res.push_back(matrix[i - j][j]);
           }
			  }
		}
    return res;
}
