#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i, test;
    scanf("%d",&test);
    int arra[test];

    int index, min;
    for(i=0; i<test; i++)
    {
        scanf("%d",&arra[i]);

    }
    min = arra[0];
    for(i=1; i<test; i++)
    {
        if(arra[i]<min)
        {
            min = arra[i];
            index = i;

        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",index);

    return 0;

}

