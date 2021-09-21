#include <bits/stdc++.h>
using namespace std;


string multiplyTwoNumbers(string num1, string num2)
{
    if (num1 == "0" || num2 == "0")
    {
        return "0";
    }

    // string that store product in reverse order
    string product(num1.size() + num2.size(), 0);

    for (int i = num1.size() - 1; i >= 0; i--)
    {
        for (int j = num2.size() - 1; j >= 0; j--)
        {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;

        }
    }

    // convert char to int
    for (int i = 0; i < product.size(); i++)
    {
        product[i] += '0';
        //cout << "product = " << i << product[i] <<endl;
    }

    // remove 0 from start side
    if (product[0] == '0')
    {
        return product.substr(1);
    }


    return product;
}
int main()
{
    string num1 = "115";
    string num2 = "115";


    if((num1.at(0) == '-' || num2.at(0) == '-') && (num1.at(0) != '-' || num2.at(0) != '-'))
    {
        cout << "-";
    }
    if(num1.at(0) == '-')
    {
        num1 = num1.substr(1);
    }
    if(num2.at(0) == '-')
    {
        num2 = num2.substr(1);
    }


    cout << multiplyTwoNumbers(num1, num2) << endl;
    return 0;
}
