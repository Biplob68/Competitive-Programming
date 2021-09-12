#include<bits/stdc++.h>

using namespace std;

// map to check a node is visited or not
map < int, int > visited;

void bfs(int start, map<int, vector<int> > graph)
{
    queue < int > q;
    q.push(start);

    visited[start] = 0;

    while( !q.empty()){
        int top = q.front();
        q.pop(); // delete top from queue

        for(int i=0; i<graph[top].size(); i++){
            int value = graph[top][i];

            // check the value is already exit or not into map
            // if exit then return 1 otherwise return 0
            if( !visited.count(value)){

                // increase number of moves
                visited[value] = visited[top] + 1;
                q.push(value);
            }
        }
    }
}
int main()
{

    int i, edge, a, b;
    int Case = 0;

    while((cin >> edge) && edge){
        map <int , vector<int> > graph;

        for(i=0; i<edge; i++){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int start, ttl;

        while(scanf("%d %d", &start, &ttl)){

            if(start == 0 && ttl == 0) break;

            visited.clear();

            bfs(start, graph);
            int cnt = 0;

            for(map < int,int >::iterator it = visited.begin(); it!=visited.end(); it++){
                if((*it).second > ttl) cnt++;
            }
           // cout << graph.size() << " "  << visited.size() << endl;

            cnt += graph.size() - visited.size(); //  graph could has no connected nodes

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++Case,cnt, start,ttl);
        }
    }

    return 0;
}
