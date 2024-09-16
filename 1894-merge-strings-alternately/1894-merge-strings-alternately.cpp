class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length(), m = word2.length();
        string ans = "";
        for (int i = 0; i<(max(n,m)); i++){
            if(i>=n){
                ans += word2[i];
            }
            if(i>=m){
                ans+=word1[i];
            }
            if(i<n && i<m){
                ans+=word1[i];
                ans+=word2[i];
            }
        }
        return ans;
    }
};