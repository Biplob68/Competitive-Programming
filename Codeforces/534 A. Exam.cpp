#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n == 1 || n == 2) printf("1\n1\n");
    else if(n == 3) printf("2\n1 3\n");
    else if(n == 4) printf("4\n2 4 1 3\n");
    else
    {
        printf("%d\n",n);

        for(int i=1; i<=n; i+=2){
            printf("%d ",i);
        }

        for(int i=2; i<=n; i+=2){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
