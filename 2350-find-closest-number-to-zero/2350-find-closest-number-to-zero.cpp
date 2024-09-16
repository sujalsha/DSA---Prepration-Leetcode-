class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i=0;i<nums.size();i++){
            if(nums[i]<0){
                if(abs(nums[i])<abs(ans)){
                    ans = nums[i];
                }
            } 
            else if(nums[i]>=0 && nums[i]<=abs(ans)){
                ans = nums[i];
            }
        }
        return ans;
    }
};