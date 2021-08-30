#include<bits/stdc++.h>

using namespace std;

int main()

{
    int test, a, b, x, y, n;
    cin >> test;

    while(test--)
    {
        long long pro1, pro2;
        cin >> a >> b >> x >> y >> n;

        int da = min(a-n, x);
        int db = min(y, b-n);

        pro1 = da*b;
        pro2 = db*a;

        printf("%d\n", min(pro1,pro2));

    }

    return 0;
}
