#include<bits/stdc++.h>

using namespace std;

// Function to find prime or not
bool prime (int n)
{
    if (n == 0 || n == 1)
        return false;

    if (n == 2)
        return true;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int i,ans , n, m;

    cin >> n >> m;


    for(i=n+1; i<=m; i++){
        if(prime(i)) {
            ans = i;
            break;
        }
    }
    if(ans == m) printf("YES\n");
    else printf("NO\n");

    return 0;
}
