/* Problem: Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).
Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]
*/

queue<int> q1,q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        
        // Push all element from q1 to q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        
       // push value x into q1
        q1.push(x);
         
        // Again return all element from q2 to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int x;
        if(!q1.empty()){
            x = q1.front();
            q1.pop();
        }
        else exit(0);
        return x;
    }
    
    int top() {
        int x;
        if(!q1.empty()){
            x = q1.front();
        }
        else exit(0);
        return x;
    }
    
    bool empty() {
        return q1.empty();
    }
