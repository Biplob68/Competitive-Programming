/* Problem: Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find all possible paths from node 0 to node n - 1 and return them in any order.
The graph is given as follows: graph[i] is a list of all nodes you can visit from node i (i.e., there is a directed edge from node i to node graph[i][j]).

Input: graph = [[1,2],[3],[3],[]]
Output: [[0,1,3],[0,2,3]]
Explanation: There are two paths: 0 -> 1 -> 3 and 0 -> 2 -> 3.
*/

// solution using dfs 
void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int>&path, int start){
        // update path vector
        path.push_back(start);
        // update result if taget meet
        if(start == graph.size()-1) result.push_back(path);
        // or call dfs again
        else {
            for(int i: graph[start]) dfs(graph, result, path, i);
        }
        // backtrack path
        path.pop_back();
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int>path;
        dfs(graph, result, path,0);
        return result;
}
// Time Complexity: O(2^n)
