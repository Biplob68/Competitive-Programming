#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;


    while(scanf("%d", &n), n)
    {
        // min heap
        priority_queue < int, vector <int>, greater<int> > q;

        while(n--){
            scanf("%d",&x);
            q.push(x);
        }

        int sum =0, cost =0;

        while(q.size() > 1){
            sum = q.top();
            q.pop();
            sum += q.top();
            q.pop();
            cost += sum;
            q.push(sum);
        }

        printf("%d\n", cost);
    }

    return 0;
}
