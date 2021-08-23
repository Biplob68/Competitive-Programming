#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, test, max =1,   cnt=1;

    cin >> test;
    int arr[test];

    for(i=0; i<test; i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<test-1; i++)
    {

        if(arr[i+1] > arr[i])
        {
            cnt++;
        }
        if(cnt > max)
        {
            max = cnt;
            //cnt =1;
        }

        else if(arr[i+1] <= arr[i]){
            cnt = 1;
        }
    }


    printf("%d\n",max);
    return 0;
}
