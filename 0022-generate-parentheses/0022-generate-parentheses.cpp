class Solution {
public:

    void helper(string &s, int open, int close, vector<string> &res){

        if(open == 0 and close == 0){    
            res.push_back(s);
        }

        if(open > 0){
            s.push_back('(');
            helper(s, open - 1, close, res);  
            s.pop_back();   
        }

        if(close > 0 and open < close){ 
            s.push_back(')');
            helper(s, open, close - 1, res);    
            s.pop_back(); 
        }
    }

    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        string s = "";
        helper(s, n, n, res);

        return res;
    }
};