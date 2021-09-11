#include<bits/stdc++.h>

using namespace std;

vector<int>v[201]; // 2D vector
int color[201];

// function to check bi-colorable or not
bool isBicolor(int n, int start)
{
    queue < int > Q;
    Q.push(start);

    // first fill up color array with -1
    for(int i=0; i<n; i++)
    {
        color[i] = -1;
    }

    color[start] = 1;

    while(!Q.empty()){

        int f = Q.front();

        for(int i=0; i<v[f].size(); i++){

            // check the node is already colored or not
            if(color[v[f][i]] == -1){
                color[v[f][i]] = 1 + color[f];
                Q.push(v[f][i]);
            }

            // check the node color is same or not to its adjacent nodes
            else if(color[v[f][i]] == color[f]) return false;
        }
        Q.pop();
    }
    return true;
}


int main()
{
    int node, edge;

    int x,y;

    while(cin >> node)
    {
        if(node == 0) break;

        cin >> edge;

        while(edge--){
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        bool flag = isBicolor(node, 0);

        if(flag)  printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        // clean vector element
        for(int i=0; i<201; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}
