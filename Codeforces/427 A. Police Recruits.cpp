#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;

    scanf("%d", &n);

    int crime = 0, recruit = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&num);

        if(num == -1)
        {
            if(recruit > 0)
            {
                recruit--;
            }
            else crime++;
        }

        if(num > 0) recruit += num;
    }
    printf("%d\n", crime);

    return 0;
}
