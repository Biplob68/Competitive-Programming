#include<bits/stdc++.h>

using namespace std;

int main()
{
    std::string str;

    cin >> str;
    //getline(std::cin, str);

    for(int i=str.size(); i>=0; i--)
    {
        char ch = std::tolower(str[i]);
        if( !(ch >= 'a' && ch <= 'z') ) continue;
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            printf("YES\n");
            break ;
        }
        else
        {
            printf("NO\n");
            break;
        }

    }

    return 0;
}

