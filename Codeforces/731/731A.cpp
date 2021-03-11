#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, sum = 0;
    string s;
    cin >> s;
    int length = s.size();

    int start = 0;
    for (i = 0; i <length; i++)
    {
        int index = s[i] - 97;
        if (abs(index - start) < 13)
        {
            sum += abs(index - start);
        }
        else
        {
            sum += 26 - abs(index - start);

        }
        start = index;
    }
    cout << sum <<endl;
    return 0;
}
