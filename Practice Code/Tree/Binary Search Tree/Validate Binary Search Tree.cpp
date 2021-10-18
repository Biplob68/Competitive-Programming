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
