/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str1[8];
    char str2[8];
    int l1,l2,l3,i;

    cin >> str1 >> str2;

    l1 = strlen(str1);
    l2 = strlen(str2);
    l3 = min(l1,l2);
    for(i=l3-1; i>=0; i--)
    {
        if(str1[i]-48+str2[i]-48>9)
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");

    return 0;
}
*/


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
