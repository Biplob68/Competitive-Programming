#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, m;
    char str[105][105];
    cin >> n >> m;

    // Input for flag color
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> str[i][j];
        }
    }

    int flag = 1;

    // Colors of adjacent horizontal rows should not same
    for(i=1; i<n; i++){
        for(j=0; j<m; j++){
            if(str[i][j] == str[i-1][j]){
                flag = 0;
                break;
            }
        }
    }

    // horizontal row of the flag should contain the same colour
    for(i=0; i<n; i++){
        for(j=1; j<m; j++){
            if(str[i][j] != str[i][j-1]){
                flag = 0;
                break;
            }
        }
    }

    if(flag == 0) printf("NO\n");
    else printf("YES\n");

    return 0;
}
