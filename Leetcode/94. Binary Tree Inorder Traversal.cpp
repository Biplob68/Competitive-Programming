/* Given the root of a binary tree, return the inorder traversal of its nodes' values.
Input: root = [1,null,2,3]
Output: [1,3,2]
*/ 
-------------------------------------------------------
// Method - 1  --> Using recursion
// Time Complexity : O(n)
// Space Complexity : O(n)
vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>v;
        inorder(root, v);        
        return v;
}

void inorder(TreeNode* root, vector<int>&v){
        
        if(root != NULL){
            inorder(root->left, v);
            v.push_back(root->val);
            inorder(root->right, v);  
        }
}

---------------------------------------------------------
// Method - 2 --> Using stack
// Time Complexity : O(n)
// Space Complexity : O(n)
vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> node;
        vector<int>ans;
        
        while(root || !node.empty()){
            
            // store all left node of root into stack
            while(root){
                node.push(root);
                root = root->left;
            }
     
            root = node.top();
            node.pop();
            ans.push_back(root->val);
            root = root->right;
        }
        
        return ans;
}
