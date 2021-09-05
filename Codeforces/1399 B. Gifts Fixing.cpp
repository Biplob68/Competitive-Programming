#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int i, n;
        cin >> n;
        long long arra1[55], arra2[55];

        // for number of candies in the i'th gift
        for(i=0; i<n; i++)
        {
            cin >> arra1[i];
        }

        // for number of oranges in the i'th gift
        for(i=0; i<n; i++)
        {
            cin >> arra2[i];
        }

        int min1 = arra1[0];
        int min1_index = 0;
        // minimum value for array 1
        for(i=1; i<n; i++)
        {
            if(min1 > arra1[i])
            {
                min1 = arra1[i];
                min1_index = i;
            }
        }

        int min2 = arra2[0];
        int min2_index = 0;
        // minimum value for array 2
        for(i=1; i<n; i++)
        {
            if(min2 > arra2[i])
            {
                min2 = arra2[i];
                min2_index = i;
            }
        }

        long long cnt = 0;

        // if min number of candies and min of oranges index not equal
        if(min1_index != min2_index)
        {
            cnt += arra1[min2_index] - min1;
            cnt += arra2[min1_index] - min2;
        }

        //cout << cnt << endl;

        for(i=0; i<n; i++)
        {
            if( i!= min1_index && i != min2_index)
            {
                long long v1 = arra1[i] - min1;
                long long v2 = arra2[i] - min2;
                cnt += max(v1, v2);

            }
        }

        printf("%lld\n", cnt);

    }

    return 0;
}
