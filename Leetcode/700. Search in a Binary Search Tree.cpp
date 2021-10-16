/* Problem: You are given the root of a binary search tree (BST) and an integer val.
Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.
Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]
Input: root = [4,2,7,1,3], val = 1
Output: [1]
*/

// Method - 1 --> Iterative solution
TreeNode* searchBST(TreeNode* root, int val) {
     
        TreeNode* temp = root;
        
        while(temp != NULL){
            // If find the val then return the node
            if(temp->val == val) return temp;
            
            // If the value is greater than the node
            // then check the right side of the node
            else if(val > temp->val) temp = temp->right;
            
            // If the value is smaller than the node
            // then check the left side of the node
            else if(val < temp->val) temp = temp->left;
        }
        // If not find then return null
        return NULL;
}


// Method - 2 ---> Recursive solution
TreeNode* searchBST(TreeNode* root, int val) {
     
        TreeNode* temp = root;
        if(root == NULL) return NULL;
        
        else if(val > root->val) return searchBST(root->right, val);
        else if(val < root->val) return searchBST(root->left , val);
        else temp = root; // root->val == val
        
        return temp;
    }
