#include<stdio.h>

#define MAX 5
int Stack[MAX];

int top = -1;

void push(int x)
{
    printf("Push Operation \n");

    if(top < MAX-1)
    {
        top = top+1;
        Stack[top] = x;
        printf("The Element %d is added into stack\n",x);
    }
    else
    {
        printf("No Space in the stack!\n");
    }
}

void pop()
{
    printf("Pop Operation \n");
    if(top>=0)
    {
        printf("Top element of the stack is %d\n",Stack[top]);
        top--;
    }
    else
    {
        printf("There is no element is the stack to pop! Empty stack!\n");
    }
}

void peek()
{
    printf("Peek Operation \n");
    if(top>=0)
    {
        printf("Top element of the stack is %d\n",Stack[top]);
    }
    else
    {
        printf("There is no element is the stack! Empty stack!\n");
    }
}

void display()
{
    printf("All element in Stack : ");
    for(int i=top; i>=0; i--)
    {
        printf("%d ",Stack[i]);
    }

    printf("\n\n");
}
int main()
{
    push(3);
    push(5);
    peek();
    push(2);
    display();
    peek();
    push(8);
    pop();
    push(10);
    push(5);
    peek();
    display();
    return 0;

}
