#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i, n,cnt,t;

    scanf("%d",&t);

    for(i=0; i<t; i++){

       scanf("%d",&n);
       cnt=0;

        while(n%6 == 0){

            n=n/6;
            cnt++;
        }

        while(n%3 == 0){
            n=n/3;
            cnt+= 2;
        }

        if(n == 1) cout<<cnt<<endl;

        else  cout<<"-1"<<endl;

    }
    return 0;

}
