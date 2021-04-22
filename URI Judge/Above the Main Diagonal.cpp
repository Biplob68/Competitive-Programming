
#include<bits/stdc++.h>

using namespace std;
int main()
{
    double sum=0.0, M[12][12];
    char T[2];
    int i,j;

    scanf("%s", &T);

    for(i=0; i<=11; i++)
    {
        for(j=0; j<=11; j++)
        {
            scanf("%lf", &M[i][j]);

        }
    }

    for(i=0; i<=11; i++){

        for(j=0; j<=11; j++){
           if (i < j) {
            sum = sum + M[i][j];
         }
        }

     }


    if(T[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(T[0]=='M')
    {
        sum=sum/66.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}

