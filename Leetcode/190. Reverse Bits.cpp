
#include<bits/stdc++.h>

using namespace std;


/* Problem : Reverse bits of a given 32 bits unsigned integer.

Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, 
so return 964176192 which its binary representation is 00111001011110000010100101000000.
*/

// Function to reverse the 32 bits binary number
uint32_t reverseBits(uint32_t n) {

        uint32_t res = 0;


        for(int i = 0 ; i < 3 ; ++i)

        for(int i = 0 ; i < 32 ; ++i)
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

