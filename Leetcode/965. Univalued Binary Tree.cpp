bool isUnivalTree(TreeNode* root) {
  
        if(root == NULL) return true;
        if(root->left == NULL && root->right == NULL) return true;
        
        queue<TreeNode*>q;
        q.push(root);
        int val = root->val;
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0; i<size; i++){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->val != val) return false;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        
        return true;
}
