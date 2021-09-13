#include<bits/stdc++.h>

using namespace std;

#define MAX 20005

vector<int> v[MAX];
bool color[MAX];
bool visited[MAX];

long long int bfs(int start)
{
     long long int maxx, lykan_cnt = 0, vampire_cnt = 0;
     queue<int>q;

     q.push(start);
     visited[start] = 1;
     color[start] = 1;
     lykan_cnt++;

     while(!q.empty()){
        int top = q.front();
        q.pop();

        for(int i=0; i<v[top].size(); i++){
            int val = v[top][i];

            // if not visited , visit the node and color with 0 or 1
            // I assign color 1 to every node adjacent to a color 0 node
            if(visited[val] == 0){
                q.push(val);
                visited[val] = 1;

                if(color[top] == 1){
                    color[val] = 0;
                    vampire_cnt++;
                }

                else {
                    color[val] = 1;
                    lykan_cnt++;
               }

            }
        }
     }

     // find the max number form vampire and lykan
     maxx = max(vampire_cnt, lykan_cnt);
    // cout << maxx << endl;

     return maxx;
}

int main()
{
    int test, n, x, y, Case = 1;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%d",&n);

        long long int sum = 0;

        // delete all element from vector
        for(int i=0; i<MAX; i++){
            v[i].clear();
        }
        // fill up visited and color array with 0
        memset(visited, false, sizeof(visited));
        memset(color, false, sizeof(color));

        // store node into 2D vector
        for(int i=0; i<n; i++){
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }

        //
        for(int i=0; i<MAX; i++){
            if(visited[i] == 0 && !v[i].empty()){
                    sum += bfs(i);
            }
        }
        printf("Case %d: %lld\n", Case++, sum);

    }

    return 0;

}
