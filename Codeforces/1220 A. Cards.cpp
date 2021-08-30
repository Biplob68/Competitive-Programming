#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, zero=0, one=0;

    cin >> n;
    char str[n];

    for(int i=0; i<n; i++)
    {
        cin >> str[i];

        if(str[i] == 'n'){
           // printf("1 ");
            one++;
        }

        if(str[i] == 'z')
        {
            //printf("0 ");
            zero++;
        }
    }

    for(int i=0; i<one; i++){
        printf("1 ");
    }

    for(int i=0; i<zero; i++){
        printf("0 ");
    }
    printf("\n");

    return 0;
}
