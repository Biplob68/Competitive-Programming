#include<bits/stdc++.h>

using namespace std;

vector<int>graph[21];

int cost[50];
int visited[50];

void bfs(int start, int dest)
{
    memset(cost, 0, sizeof(cost));
    memset(visited, 0, sizeof(visited));

    queue < int > q;

    q.push(start);
    visited[start] = 1;

    while(!q.empty())
    {
        int top = q.front();
        q.pop();

        for(int i=0; i<graph[top].size(); i++)
        {
            int val = graph[top][i];

            // check the node is visited or not
            // if not visit then visit and increase the cost by +1
            if(!visited[val])
            {
                cost[val] = cost[top] + 1;
                visited[val] = 1;
                q.push(val);
            }
        }
    }

    printf("%2d to %2d: %d\n", start, dest, cost[dest]);
}




int main()
{
    int i = 1, j, test = 1;

    int node, edge;

    while(scanf("%d", &node) != EOF)
    {

        for(j=0; j<node; j++)
        {
            //cin >> edge;
            scanf("%d", &edge);
            graph[i].push_back(edge);
            graph[edge].push_back(i);
        }

        /*
        for(i=2; i<=19; i++)
        {
            //cin >> node;
            scanf("%d", &node);

            for(j=0; i<node; i++)
            {
                //cin >> edge;
                scanf("%d",&edge);

                graph[i].push_back(edge);
                graph[edge].push_back(i);
            }
        }  */




        if(i==19)
        {
            int start, dest, n;
            scanf("%d", &n);

            printf("Test Set #%d\n", test++);

            for(i=0; i<n; i++)
            {
                //cin >> start >> dest;
                scanf("%d %d", &start, &dest);
                bfs(start, dest);
            }

            printf("\n");

            // delete all element form vector
            for(i=0; i<21; i++)
            {
                graph[i].clear();
            }
            i = 0; // reset i
        }

        i++;
    }

    return 0;
}
