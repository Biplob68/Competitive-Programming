#include<bits/stdc++.h>

using namespace std;

const int maxx = 500005;
int arra[maxx];

// function to set 1 for all triangular number
void trangle_number()
{
    memset(arra, 0, maxx);
    for(int i=1; i<=500; i++)
    {
        int index = i*(i+1)/2;
        arra[index] = 1;
    }
}

int main()
{
    int n;
    trangle_number();

    cin >> n;

    if(arra[n] == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
