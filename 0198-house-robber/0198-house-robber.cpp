class Solution {
public:
    int dp[101];
    
    int sol(vector<int>& nums, int i, int n){
        if(i>=n) return 0;
        
        if(dp[i]!=-1) return dp[i];
        int steal = nums[i]+sol(nums, i+2, n);
        int skip = sol(nums, i+1, n);
        return dp[i] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        
        return sol(nums, 0, n);
    }
};