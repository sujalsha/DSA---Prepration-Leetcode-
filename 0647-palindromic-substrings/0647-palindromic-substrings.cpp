class Solution {
public:
    bool isPalindrome(string &s, int l, int r){
        if(r==l)  return true;
        while(r>=l){
            
            if(s[r]!=s[l]){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPalindrome(s, i, j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};