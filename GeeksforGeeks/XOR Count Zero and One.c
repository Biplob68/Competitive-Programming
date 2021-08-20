/* Given a number N, the task is to find XOR of count of 0s and count of 1s in binary representation of a given number.

Input: N = 5
Output: 3
Explanation: 
Binary representation: 101
Set_bit_count: 2
Unset_bit_count: 1
2 XOR 1 = 3 
*/

#include<stdio.h>

// Function to find XOR 
	int find_xor(int n)
	{
	    int count0 = 0, count1=0;
	    
	    while(n)
	    {
	        if(n%2==0) count0++;
	        else count1++;
	        n = n/2;
	    }
	    
	    return (count0 ^ count1);
	}

int main()
{
  int Test;
  scanf("%d",&Test);
  
  while(Test--)
  {
    int n;
    scanf("%d",&n);
    int xor = find_xor(n);
    printf("%d", xor);
  }
  return 0;
}
