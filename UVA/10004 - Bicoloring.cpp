#include<bits/stdc++.h>

using namespace std;

vector<int>v[201];
int color[201];

bool isBicolor(int n, int start)
{

    queue < int > Q;
    Q.push(start);

    for(int i=0; i<n; i++)
    {
        color[i] = -1;
    }

    color[start] = 1;

    while(!Q.empty())
    {
        int f = Q.front();
        for(int i=0; i<v[f].size(); i++)
        {
            if(color[v[f][i]] == -1)
            {
                color[v[f][i]] = 0;
                Q.push(v[f][i]);
            }
            else if(color[v[f][i]] == color[f])
            {
                return false;
            }
        }
        Q.pop();
    }
    return true;
}


int main()
{
    int node, edge;

    int a,b;

    while(cin >> node)
    {
        if(node == 0) break;

        cin >> edge;

        while(edge--)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);

        }

        bool flag = isBicolor(node, 0);

        if(flag)
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }

        for(int i=0; i<201; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}
