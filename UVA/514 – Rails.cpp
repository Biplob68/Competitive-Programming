#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

stack <int> st;

void track(int n)
{
    while(true){

        int x, top = 0; // first set top 0

        // clear stack element
        while(!st.empty()) st.pop();

        for(int i=0; i<n; i++){

            scanf("%d", &x);
            if(x == 0) return ;

            while(top < x){
                top++;
                st.push(top);
            }

            // when the input value is equal
            // to top of the stack then it can remove
            if(st.top() == x) st.pop();
        }

        if(st.empty()) printf("Yes\n");
        else printf("No\n");
    }
}


int main()
{
    int test;

    while(scanf("%d", &test) && test!=0){

        track(test);
        printf("\n");

    }

    return 0;
}
