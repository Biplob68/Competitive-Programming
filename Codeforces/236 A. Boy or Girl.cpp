#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100];

    set <char> set1;
    cin >> str;

    for (int i = 0; i < strlen(str); i++) {
        set1.insert(str[i]);
    }

    int len = set1.size();

    if(len % 2 == 0) printf("CHAT WITH HER!\n");

    else printf("IGNORE HIM!\n");

    return 0;
}
