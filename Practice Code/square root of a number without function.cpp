#include<bits/stdc++.h>

using namespace std;


int main()
{
    double i, n, n1, avg, num;

    cin >> num;

    for(i=1; i<num; i++){

        if(i*i == num) {
            printf("%.1lf\n",i);
            return 0;
        }
        if(i*i > num) {
            n = i-1;
            break;
        }
    }

    n1 = num / n;

    for(i=0; i<10; i++){
       avg = (n+n1)/2;
       n1 = n;
       n = avg;

    }

    printf("%.10lf\n", n);

}
