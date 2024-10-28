class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.length() == 0) return 0;
        if(s.length() == 1) return 1;
        
        unordered_map<char, int> m;  
        int maxLen = 0;
        int start = 0;  
        
        for(int end = 0; end < s.length(); end++) {
           
            if(m.find(s[end]) != m.end() && m[s[end]] >= start) {
                
                start = m[s[end]] + 1;
            }
            
           
            m[s[end]] = end;
            
            
            maxLen = max(maxLen, end - start + 1);
        }
        
        return maxLen;
    }
};