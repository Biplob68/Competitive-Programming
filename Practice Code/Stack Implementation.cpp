#include<bits/stdc++.h>


using namespace std;


#define MAX 2
int Stack[MAX];

int top = -1;

void push(int x){


    if(top < MAX-1){
        top = top+1;
        Stack[top] = x;
        printf("The Element %d is added into stack\n",x);
    }
    else {
        printf("No Space in the stack!\n");
    }

}

int pop(){

    if(top>=0){
        printf("Top element of the stack is %d\n",Stack[top]);
        top--;
    }
    else {
        printf("There is no element is the stack to pop! Empty stack!\n");
    }


}
int peek(){

    if(top>=0){
        printf("Top element of the stack is %d\n",Stack[top]);
    }
    else {
        printf("There is no element is the stack! Empty stack!\n");
    }

}
int main()
{
    push(3);
    pop();
   // push(5);
    peek();
    push(8);
    pop();
    peek();
    return 0;

}
