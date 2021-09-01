#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;

    cin >> n;

    int arra[n][n];

    // Input 2-D array
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> arra[i][j];
        }
    }
    int sum = 0;

    // add main diagonal element
    for(i=0, j=0; i<n; i++, j++){
        sum = sum + arra[i][j];
        arra[i][j] = 0;
    }

    // add secondary diagonal element
    for(i=0, j=n-1; i<n; i++, j--){
        sum = sum + arra[i][j];
        arra[i][j] = 0;
    }

    // add middle row element
    for(j=0; j<n; j++){
        sum = sum + arra[n/2][j];
        arra[n/2][j] = 0;
    }

    // add middle column element
    for(i=0; i<n; i++){
        sum = sum + arra[i][n/2];
        arra[i][n/2] = 0;
    }

    printf("%d\n", sum);

    return 0;
}
