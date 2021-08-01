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
