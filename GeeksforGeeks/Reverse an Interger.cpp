#include<stdio.h>

int reverseInt(int num)
{
    int reminder, rev =0;

    while(num != 0)
    {
        reminder = num%10;
        rev = rev*10 + reminder;
        num = num/10;
    }
    return rev;
}


int main()
{
    int n;
    printf("Input a number : ");
    scanf("%d",&n);

    int ans = reverseInt(n);
    printf("After reverse the Number : ");
    printf("%d\n",ans);
    return 0;
}
