#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int arra[n];

    for(int i=0; i<n; i++)
    {
        cin >> arra[i];
    }

    sort(arra, arra+n);

    int flag =0;
    for(int i=0; i<n-2; i++){

        if(arra[i]+arra[i+1] > arra[i+2]){
            flag =1;
            printf("YES\n");
            break;
        }
    }
    if(flag == 0) printf("NO\n");

    return 0;
}
