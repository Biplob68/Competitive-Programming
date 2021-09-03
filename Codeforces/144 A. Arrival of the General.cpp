#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arra[n];

    for(i=0; i<n; i++)
    {
        cin >> arra[i];
    }

    int maxx = 0;
    int minn = 10000;
    int max_index = 0, min_index = 0;

    // Find out max and min element in array
    for(i=0; i<n; i++)
    {
        if(arra[i] > maxx)
        {
            maxx = arra[i];
            max_index = i;
        }

        if(arra[i] <= minn)
        {
            minn = arra[i];
            min_index = i;
        }
    }

  //  printf("%d %d\n",max_index, min_index);

    int ans;

    if(max_index > min_index) {
            ans = (max_index) + (n-1-min_index) -1;
    }
    else {
            ans = (max_index) + (n-1-min_index);
    }
    printf("%d\n", ans);

    return 0;
}
