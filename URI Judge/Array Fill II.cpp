#include<bits/stdc++.h>

using namespace std;

void arra(int num)
{
    int i=0,j,k=0;

    for(i=0,j=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==num)
        {
            j=0;
        }

    }

}


int main()
{
    int n;
    scanf("%d",&n);
    arra(n);
    return 0;
}
