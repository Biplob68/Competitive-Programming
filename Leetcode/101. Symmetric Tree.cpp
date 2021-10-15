/* problem: Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
            1
           / \
          /   \
         2     2
        / \    / \
       3   4  4   3
       
Input: root = [1,2,2,3,4,4,3]
Output: true

           1
          / \
         2   2
         \     \
          3     3
          
Input: root = [1,2,2,null,3,null,3]
Output: false
*/


bool isSymmetric(TreeNode* root) {
     
        // If root is NULL then return true
        if(root==NULL) return true;
        
        return symmetric(root->left, root->right);
}
    
bool symmetric(TreeNode* left, TreeNode* right){
        
        // When left and right is null then return true
        if(left==NULL && right==NULL)
            return left==right;
        
        // If left val and right val not equal then return false
        else if(left->val != right->val)
            return false;
        
        // Recrusivly call the symmetric function again
        return symmetric(left->left, right->right) && symmetric(left->right, right->left);
}
