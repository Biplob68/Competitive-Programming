#include<stdio.h>
#include<stdbool.h>
#include<math.h>

// Function to check a number is power of 2 or not
bool check_power_of_2(int num)
{
    if(num == 0) return false;

    while(num != 1)
    {
        if(num%2 != 0) return false;
        num = num/2;
    }
    return true;
}

int main()
{
    int num;
    scanf("%d",&num);


    if(check_power_of_2(num))
        printf("Power of 2\n");
    else
        printf("Not power of 2\n");

    return 0;
}

// Time Complexity: O(log(n))

-----------------------------------------
/* Method - 2
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
Complexity: O(1) 
-------------------------------------------

/* Bitwise method
bool isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
}
---------------------------------------------
