class Solution {
public:
    vector<vector<int>> twoSum(int target, vector<int>& num, int number, int start) {
        vector<vector<int>> res;
        int i = start, j = num.size() - 1;

        while (i < j) {
            int sum = num[i] + num[j];
            if (sum == target) {
                res.push_back({number, num[i], num[j]});
                ++i;
                --j;
               
                while (i < j && num[i] == num[i - 1]) ++i;
                while (i < j && num[j] == num[j + 1]) --j;
            } else if (sum < target) {
                ++i;
            } else {
                --j;
            }
        }

        return res;
    }

    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> ans;
        sort(num.begin(), num.end());

        for (int i = 0; i < num.size(); ++i) {
            if (i > 0 && num[i] == num[i - 1]) continue; 
            int target = -num[i];
            vector<vector<int>> pairs = twoSum(target, num, num[i], i + 1);
            ans.insert(ans.end(), pairs.begin(), pairs.end());
        }

        return ans;
    }
};
