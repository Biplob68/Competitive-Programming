#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[101];


    int i;


    while (scanf ("%s",str)!= EOF)
    {
        bool a,b,c;
        a=b=c= false;
        int ans =0;
        for(i=0; str[i]; i++)
        {


            if(str[i]>='a' && str[i]<='z') a = true;
            if(str[i]>='A' && str[i]<='Z') b = true;
            if(str[i]>='0' && str[i]<='9') c = true;


            if(a == true && b== true &&c == true)
            {
                ans++;
                a = b = c = false;
            }
        }

        printf("%d\n",ans);

    }
    return 0;

}
