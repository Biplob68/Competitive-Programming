// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

// Recursive function to find out max depth of a binary tree
int maxDepth(TreeNode* root) {
     
        // Root being null means tree doesn't exist.
        if(root == NULL) return 0;
        
        // Get the depth of the left and right subtree 
        // using recursion.
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        // Choose the larger one and add the root to it.
        return max(leftDepth, rightDepth) +1;
}
