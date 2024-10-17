class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int max_pos = 0, max_neg = 0, res = 0;
        for (int num : nums) {
            if (num > 0) {
                max_pos++;
                max_neg = max_neg > 0 ? max_neg + 1 : 0;
            } else if (num < 0) {
                int temp = max_pos;
                max_pos = max_neg > 0 ? max_neg + 1 : 0;
                max_neg = temp + 1;
            } else {
                max_pos = max_neg = 0;
            }
            res = max(res, max_pos);
        }
        return res;
    }
};
