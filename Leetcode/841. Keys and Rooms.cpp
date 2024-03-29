/* Problem: There are n rooms labeled from 0 to n - 1 and all the rooms are locked except for room 0. Your goal is to visit all the rooms. 
However, you cannot enter a locked room without having its key. When you visit a room, you may find a set of distinct keys in it. 
Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.
Given an array rooms where rooms[i] is the set of keys that you can obtain if you visited room i, return true if you can visit all the rooms, or false otherwise.

Example 1:

Input: rooms = [[1],[2],[3],[]]
Output: true
Explanation: 
We visit room 0 and pick up key 1.
We then visit room 1 and pick up key 2.
We then visit room 2 and pick up key 3.
We then visit room 3.
Since we were able to visit every room, we return true. */

// Solution : Using bfs
bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // set to track visited room  
        unordered_set <int> visit;
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            visit.insert(curr);
            
            for(int i: rooms[curr]){
                if(visit.count(i) == 0){
                    q.push(i);
                }
            }
        }
        
        if(visit.size() == rooms.size()) return true;
        else return false;
}


// Method 2:  Using dfs
void dfs(vector<vector<int>>& rooms, int start, unordered_set<int>&visit){
        visit.insert(start);
        
        for(int i: rooms[start]){
            if(visit.count(i) == 0){
                dfs(rooms, i, visit);
            }
        }
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
       
        unordered_set<int>visit;
        dfs(rooms, 0, visit);
        
        if(visit.size() == rooms.size()) return true;
        else return false;
}

// Time Complexity: O(M + N), where M <= 3000 is total number of edges which is sum(rooms[i].length), N <= 1000 is number of vertices.
// Space Complexity: O(N)
