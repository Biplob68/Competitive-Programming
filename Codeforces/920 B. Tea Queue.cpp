#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    while(test--)
    {
        int n, l, r;
        scanf("%d", &n);
        int top = 1;
        while(n--){
            scanf("%d %d", &l, &r);

            if(top > r) printf("0 ");

            else {
                top = max(top, l);
                printf("%d ", top);
                top++;
            }
        }
        printf("\n");
    }
    return 0;
}
