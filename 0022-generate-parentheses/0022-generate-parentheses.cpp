class Solution {
public:
    void helper(int open, int close, string &s, vector<string> &ans){
        if(close==0 && open==0){
            ans.push_back(s);
        }
        if(open>0){
            s.push_back('(');
            helper(open-1, close, s, ans);
            s.pop_back();
        }
        if(open < close && close>0){
            s.push_back(')');
            helper(open, close-1, s, ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        helper(n, n, s, ans);
        return ans;
    }
};