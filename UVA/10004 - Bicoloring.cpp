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
/*
#include <iostream>

using namespace std;

int color[1000];
bool edge[1000][1000];
int E, V;


class Queue{
public:
    int num_elems,front,end;
    int arr[10000];
    Queue(){
        num_elems=0;
        front=0;
        end=0;
        for(int i=0; i<10000; i++)
            arr[i]=-1;
    }
    bool isEmpty(){
        if(num_elems==0)
            return true;
        else
            return false;
    }

    void enqueue(int x){
        arr[end++]=x;
        num_elems++;
    }

    int dequeue(){
        num_elems--;
        return arr[front++];
    }
};

void reset(){
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++)
            edge[i][j]=false;
        color[i]=-1;
    }
}

bool isBipart(int src){
    color[src]=1;
    Queue q;
    q.enqueue(src);

    while(!q.isEmpty()){
        int node=q.dequeue();
        if(edge[node][node]){
            return false;
        }
        for(int i=0; i<V; i++){
            if(edge[node][i]){
                if(color[i]==-1){
                    color[i]=1-color[node];
                    q.enqueue(i);
                }else if(color[i]==color[node]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    while(cin>> V && V!=0){
        reset();
        cin>> E;
        for(int i=0; i<E; i++){
        int x,y;
        cin>>x>>y;
        edge[x][y]=true;
        }
        int flag=0;
        for(int i=0; i<V; i++){
            if(color[i]==-1){
                if(!isBipart(i)){
                    flag=1;
                    break;
                }
            }
        }
        (!flag)? cout<< "BICOLORABLE.":cout<< "NOT BICOLORABLE.";

        cout<< endl;
    }
} */
