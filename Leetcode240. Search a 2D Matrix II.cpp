/* Problem: Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true */

// Solution : Using divide and conquere technique

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        
        if(row == 0) return false;
        
        return search(matrix, 0, 0, target, row-1, col-1);
        
    }
    
    bool search(vector<vector<int>>& v, int p, int q, int target, int row, int col){
        
        if(p> row || q> col) return false;
        
        int mid_row = p + (row - p)/2;
        int mid_col = q + (col - q)/2;
        
        // Mid value of the matrix 
        int pivot_val = v[mid_row][mid_col];
        
        // If pivot val is equal to taget then we return true
        if(pivot_val == target) return true;
        
        // If If our target is less than the pivot, we can discard the bottom-right sub-matrix.
        // All elements in that region must be greater or equal than the pivot value.
        if(target < pivot_val){
            return search(v, p, q, target, mid_row-1, mid_col-1) || 
                search(v, p, mid_col, target, mid_row-1, col) ||
                search(v, mid_row, q, target, row, mid_col-1);
        }
      
        // If our target is greater than the pivot, we can discard the top-left sub-matrix. 
        // All elements in that region must be less than or equal than the pivot.
        else return search(v, mid_row+1, q, target, row, mid_col) || 
            search(v, p, mid_col+1, target, mid_row, col) || 
            search(v, mid_row+1, mid_col+1, target, row, col);
    }
};

// Time Complexity : O(n^log3) 
