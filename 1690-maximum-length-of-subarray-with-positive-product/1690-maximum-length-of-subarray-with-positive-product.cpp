class Solution {
public:
     int getMaxLen(vector<int>& nums) {
        int max_pos = nums[0] > 0;
        int max_neg = nums[0] < 0;
        int res = max_pos;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] > 0) {
                max_pos++;
                max_neg = max_neg > 0 ? max_neg + 1 : 0;
            }
            else if (nums[i] < 0) {
                int t = max_pos;
                max_pos = max_neg > 0 ? max_neg + 1 : 0;
                max_neg = t > 0 ? t + 1 : 1;
            }
            else {
                max_pos = max_neg = 0;
            }
            res = max(res, max_pos);
        }
        return res;
    }
};
