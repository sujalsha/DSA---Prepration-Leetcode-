class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_idx = 0;  // Pointer to track position in s
        
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[s_idx]) {
                s_idx++;  
            }
            if (s_idx == s.size()) {
                return true;
            }
        }
        
        return s_idx == s.size();
    }
};
