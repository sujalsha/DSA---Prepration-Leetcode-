class Solution {
public:
    int calculate(int a, int b, char op){
        switch(op){
            case '+':
                return b + a;  
            case '-':
                return b - a;  
            case '*':
                return b * a;  
            case '/':
                if(a != 0){
                    return b / a;  
                }
            default:
                return 0;
        }
    }
    
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(string& token : tokens) {
            
            if(token.size() == 1 && !isdigit(token[0])) {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(calculate(a, b, token[0]));
            }
            
            else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};