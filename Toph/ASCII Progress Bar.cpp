#include<bits/stdc++.h>

using namespace std;

int main()
{

    double n;
    int m,i;

    scanf("%lf",&n);
    m = n/10;

    printf("[");
    for(i=0; i<10; i++)
    {
        if(i<m)
        {
            printf("+");
        }
        else {
            printf(".");
        }
    }
    printf("]");
    int x = int(n);
    printf(" %d%\n",x);


    return 0;
}
