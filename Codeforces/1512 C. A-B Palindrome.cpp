#include<bits/stdc++.h>
using namespace std;


void solution(int a, int b, string s){

        int i, j, len = s.size();


        for(i=0; i<2; i++){
            for(j=0; j<len; j++){

                if(s[j] != '?'){
                    if(s[len-j-1] == '?') {s[len-j-1] = s[j];}
                    else if(s[j] != s[len-j-1]){
                        cout << "-1" << endl;
                        return ;
                    }
                }
            }
            reverse(s.begin(), s.end());
        }

        // count total 0 , 1 and ? char in the string
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        int que = count(s.begin(), s.end(), '?');

        a = a - zero;
        b = b - one;

        // check the string length is odd and the mid char is '?'
        bool midchar = (len % 2 == 1 && s[len/2] == '?');

        if(a < 0 || b < 0 || (a+b) != que || (midchar && a%2 == 0 && b%2==0)){
            printf("-1\n");
            return ;
        }

        if(a%2 == 1 || b%2 == 1){
            // odd number of a and odd number of b
            // but middle char is not '?' then return -1
            if(s[len/2] != '?'){
                printf("-1\n");
                return ;
            }

             s[len/2] = (a % 2 == 1 ? '0' : '1');

             if(a%2 == 1) a--;
             else b--;
        }

        if(a%2 == 1 || b%2 == 1) {
            printf("-1\n");
            return ;
        }

        for(i=0; i<len; i++){
            if(s[i] == '?'){
                if(a>0){
                    a = a-2;
                    s[i] = s[len-i-1] = '0';
                }
                else {
                    b = b-2;
                    s[i] = s[len-i-1] = '1';
                }
            }
        }
        cout << s << endl;
}
int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        string s;

        cin >> a >> b;
        cin >> s;

        solution(a, b, s);
    }

    return 0;
}
