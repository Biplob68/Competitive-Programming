
#include<bits/stdc++.h>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    return ((a>b? a:b) > (c>d? c:d) ? (a>b? a:b) : (c>d? c:d));
}


int main()
{
    long int a,b,c,d;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);

    int p, q, r;

    if(ans == a)
    {

        p = abs(a - b);
        q = abs(a - c);
        r = abs(a - d);
    }
    if(ans == b)
    {

        p = abs(b - c);
        q = abs(b - d);
        r = abs(b - a);
    }
     if(ans == c)
    {

        p = abs(c - d);
        q = abs(c - a);
        r = abs(c - b);
    }
     if(ans == d)
    {

        p = abs(d - a);
        q = abs(d - b);
        r = abs(d - c);
    }

    printf("%d %d %d\n",p,q,r);
    return 0;
}
