#include<bits/stdc++.h>

using namespace std;


uint32_t reverseBits(uint32_t n) {

        uint32_t res = 0;

        for(int i = 0 ; i < 3 ; ++i)
        {
            // Inserting 0 or 1 in res on the basis of last bit of n
            res = (res << 1) + (n & 1);

            // Right shift n by 1
            n = n >> 1;
        }
        return res;
}

int main()
{
    uint32_t num ;

    cin >> num ;

    cout << reverseBits(num) << endl;

    return 0;

}
