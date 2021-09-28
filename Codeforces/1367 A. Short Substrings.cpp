#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {
        string str;
        cin >> str;

        printf("%c", str[0]);

        for(int i=1; i<str.length(); i+=2){
            printf("%c",str[i]);
        }
        printf("\n");
    }

    return 0;
}
