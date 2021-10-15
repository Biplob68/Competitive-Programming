/* Problem: Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Input: root = []
Output: []
*/

vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector< vector<int> >ans; // 2-D vector to return ans
        queue<TreeNode*>q;  // Queue to store node
        
        if(!root) return ans; // If tree is empty 
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int>v; // Vector for each level
            
            while(size--){
                TreeNode* temp = q.front();
                q.pop();    
                v.push_back(temp->val);
            
                // Add left child into queue 
                if(temp->left) q.push(temp->left);
                // Add right child into queue
                if(temp->right) q.push(temp->right);        
            }
            
            // Store value for ecah level 
            ans.push_back(v);
        }
        return ans;
}
