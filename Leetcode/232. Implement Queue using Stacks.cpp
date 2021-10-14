/* Problem: Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]
*/



    stack < int > s1,s2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int x;
        if(!s1.empty()){
            x = s1.top();
            s1.pop();
        }
        else exit(0);
        return x;
    }
    
    int peek() {
         int x;
        if(!s1.empty()){
            x = s1.top();
        }
        else exit(0);
        return x;
    }
    
    bool empty() {
        return s1.empty();
    }
