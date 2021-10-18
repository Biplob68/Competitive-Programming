/* Problem: Given the root of a binary tree, determine if it is a valid binary search tree (BST).
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
*/

bool isValidBST(TreeNode* root) {
        
        if(root==NULL) return true;
        stack<TreeNode*> st;
        TreeNode *pre = NULL;
        
        while(root != NULL || !st.empty()){
            
            // store all left node into stack
            while(root != NULL){
                st.push(root);
                root = root->left;
            }
            
            root = st.top();
            st.pop();
            if(pre!=NULL && pre->val >= root->val) return false;
            // save previous node 
            pre = root;
            root = root->right;
        }
        return true;
}
