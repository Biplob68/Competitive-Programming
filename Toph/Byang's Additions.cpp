
#include<bits/stdc++.h>
using namespace std;
int main(){
    char j,k;
    string c,d;
    int a,b,i,x,y=0,count=0;
    cin>>c>>d;
    reverse(c.begin(), c.end());
    reverse(d.begin(), d.end());

    for(i=0;i<min(c.length(), d.length());i++){
        j=c[i];
        k=d[i];
        a=j-'0';
        b=k-'0';
        if(a+b>=10){
            count++;
        }

    }
    if(count>0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
