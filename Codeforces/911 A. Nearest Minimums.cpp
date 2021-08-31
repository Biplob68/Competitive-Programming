#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;

    cin >> n;

    int arra[n];

    // Input of array value
    for(i=0; i<n; i++){
        cin >> arra[i];
    }

    // Find out 1st minimum value and index in array
    int min = arra[0];
    int pos = 0;
    for(i=1; i<n; i++){
        if(min > arra[i]){
            min = arra[i];
            pos = i;
        }
    }

   // printf("%d %d\n",min, pos);

    vector <int> v;
    v.push_back(pos); // push the position of 1st min value into vector

    // find other value equal to minimum value
    for(i=pos+1; i<n; i++){
        if(min == arra[i]){
        v.push_back(i);
        }
    }


    // Find distance of two minimum
     min = 1e5;
    for(i=1; i<v.size(); i++){
        int res = v[i] - v[i-1];
        if(min > res){
            min = res;
        }
    }

    printf("%d\n",min);

    return 0;
}
