/* solution */


 bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        vector<vector<int>> graph(n);
        
        for(int i=0; i<edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        // BFS code
        
        queue<int>q;
        q.push(start);
        vector<int>visited(n,0);
        visited[start] = 1;
        
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(top == end) return true;
          
            for(int i=0; i<graph[top].size(); i++){
                if(visited[graph[top][i]] == 0){
                    visited[graph[top][i]] = 1;
                    q.push(graph[top][i]);
                }
            }
        }
        
        return false;
 }
