/* Problem: Evaluate the value of an arithmetic expression in Reverse Polish Notation. Valid operators are +, -, *, and /. Each operand may be an integer or another expression.
Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
*/

 
    int calculate(int a, int b, string s){
       
        int ans;
        switch(s[0]){
            case '+': ans = a+b; break;
            case '-': ans = a-b; break;
            case '*': ans = a*b; break;
            case '/': ans = a/b; break;
            default: break;
        }
        return ans;  
    }
    
    

    int evalRPN(vector<string>& tokens) {
        
        stack<int>st;
        
        for(int i=0; i<tokens.size(); i++){
            
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                
                int ans = calculate(y,x,tokens[i]);
                
                st.push(ans);
            }
            
            else st.push(stoi(tokens[i]));
        }
        
        return st.top();
    }
