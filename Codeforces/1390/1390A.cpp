#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;

    string s = "Poor Alex";
int a,b;
    scanf("%d",&T);

    for(int i=0; i<T; i++){

        scanf("%d %d",&a,&b);


        if(b>a){
            s = "Happy Alex";
        }

    }


   cout<<s<<endl;

    return 0;
}



/*

#include <iostream>

using namespace std;

int main()

{

    int a;

    string sol="Poor Alex\n";

    cin>>a;

    for(int i=0;i<a;i++){

        int in1,in2;

        cin>>in1>>in2;

        if(in2>in1)sol="Happy Alex\n";

    }

    cout<<sol;

    return 0;

}
*/
