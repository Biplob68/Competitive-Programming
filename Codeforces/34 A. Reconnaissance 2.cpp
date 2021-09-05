#include<bits/stdc++.h>
using namespace std;

int main()
{
    int index1, index2, i, n;

    scanf("%d", &n);
    int arra[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arra[i]);
    }

    int minn = 1100, dis=0;

    // case handle for first and last element
    dis = abs(arra[0] - arra[n-1]);
    minn = min(minn, dis);
    index1 = 1;
    index2 = n;

    for(i=0; i<n; i++)
    {
        dis = abs(arra[i] - arra[i+1]);
        if(minn > dis )
        {
            minn = dis;
            index1 = i+1;
            index2 = i+2;
        }
    }


    printf("%d %d\n",index1, index2);

    return 0;
}
