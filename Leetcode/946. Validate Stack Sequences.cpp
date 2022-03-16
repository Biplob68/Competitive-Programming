/* Given two integer arrays pushed and popped each with distinct values, return true
if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.

Example 1:

Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
Output: true
Explanation: We might do the following sequence:
push(1), push(2), push(3), push(4),
pop() -> 4,
push(5),
pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1
*/

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> st;
        
        int i=0, j=0, len1=pushed.size(), len2=popped.size();
        
        while(i<len1){
            st.push(pushed[i]);
            i++;
            
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        /*while(i<len1){
           
            // If stack top value is equal to popped value 
            // Then pop from the stack
            if(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
            // If push and pop value from vector is not equal 
            // Then push into stack from push list
            else if(pushed[i] != popped[j]){
                st.push(pushed[i]);
                i++;
            }
            // If value of push pop list is equal then ignore it 
            // and increment the pointer for next iteration
            else {
                i++;
                j++;
            }
        }
        
        // case for reamin popped list
        while(j<len2){
            if(st.top() == popped[j]){
                st.pop();
            }
            j++;
        } */
        
        // When stack is empty then return true
        if(st.empty()) return true;
        else return false;
}
