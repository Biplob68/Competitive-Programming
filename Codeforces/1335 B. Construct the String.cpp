#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {
        int i, n, a, b;

        scanf("%d %d %d", &n, &a, &b);

        char alpha[] = "abcdefghijklmnopqrstuvwxyz";
        char str[n];

        for(i=0; i<b; i++){
            str[i] = alpha[i];
        }
        int index = 0;

        for(i=0; i<n; i++)
        {
            printf("%c", str[index++]);

            if(index== b) index =0;
        }
        printf("\n");

    }

    return 0;
}
