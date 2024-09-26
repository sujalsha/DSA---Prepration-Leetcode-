class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end());
        int ans=0, n = c.size();
        for(int i=0;i<n;i++){
            if (c[i]>= c.size()-i){
                ans = max(ans, n-i);
        }
        }
        return ans;
    }
};