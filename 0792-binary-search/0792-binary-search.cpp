class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high=nums.size()-1;
        if(nums.size()==1 && nums[0]==target){
            return 0;
        }
        while(low<=high && nums.size()>1){
            int mid = low + ((high - low) / 2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
        }
        return -1;
    }
};