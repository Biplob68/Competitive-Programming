#include<bits/stdc++.h>

using namespace std;

// function to add two binary number -> 101+100 = 1001
string addBinary(string a, string b)
{
    string result = "";

    int sum = 0;

    int len1 = a.length()-1;
    int len2 = b.length()-1;

    while(len1>=0 || len2>=0 || sum==1)
    {
        // find out sum of last digits
        sum += ( (len1>=0)? a[len1] - '0' : 0);
        sum += ( (len2>=0)? b[len2] - '0' : 0);

        // If current sum is 1->1 or 3->11 then add 1 to result
        // If current sum is 2->10 then add 0 to the result
        result = char(sum%2 + '0') + result;

        // carry of the current sum;
        sum = sum / 2;

        len1--;
        len2--;
    }

    return result;
}

int main()
{

    string a, b;

    cin >> a >> b;

    cout << addBinary(a,b) << endl;

    return 0;
}
