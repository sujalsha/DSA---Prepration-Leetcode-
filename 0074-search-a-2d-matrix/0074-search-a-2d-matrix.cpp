class Solution {
public:
bool search(vector<int>& nums, int target) {
        int low = 0, high=nums.size()-1;
        if(nums.size()==1 && nums[0]==target){
            return true;
        }
        while(low<=high && nums.size()>1){
            int mid = low + ((high - low) / 2);
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size(), m=matrix.size();
        bool ans;
        int i =0;
        while(i<m){
            if(target>=matrix[i][0] && target<=matrix[i][n-1]){
                ans = search(matrix[i],target);
                return ans;
            }
            i++;
        }
        return false;
    }
};