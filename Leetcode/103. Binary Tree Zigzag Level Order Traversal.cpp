vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
  
        // If root is null then return null
        if(root == NULL) return {};
        
        vector<vector<int>> ans;
        
        queue<TreeNode*>q;
        q.push(root);
        
        int level = 0;
       
        while( !q.empty() ){
            int size = q.size();
            vector<int>current(size);
            
            for(int i=0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                // For odd level
                if(level==0) current[i] = temp->val; 
                // Even level insert from end. 3, 2, 1, 0. (sz - i - 1) to get the index from end
                else current[size-i-1] = temp->val; 
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(current);
            
            level==0 ? level=1 : level=0; // change the level
        }
        return ans;
        
}
