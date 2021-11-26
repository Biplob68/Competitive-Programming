#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    getc(stdin);

    while (test--)
    {
        stack<char> stack;
        char s[140];
        gets(s);

        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (stack.empty() || stack.top() != '(')
                {
                    stack.push('a');
                    break;
                }
                stack.pop();
            }
            else if (s[i] == ']')
            {
                if (stack.empty() || stack.top() != '[')
                {
                    stack.push('a');
                    break;
                }
                stack.pop();
            }
        }

        if(stack.empty()) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
