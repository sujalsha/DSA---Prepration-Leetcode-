class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int mid, first = 0, last = n-1;
                
        if(target>nums[last]){
            return n;
        }
        else if(target<=nums[first]){
            return first;
        }
        mid = (first+last)/2;
        while(last>=first){
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                first = mid+1;
                mid = (first+last)/2;
            }
            else if(target < nums[mid]){
                last = mid-1;
                mid = (first+last)/2;
            }
        }
          
        if(target>nums[mid]){
            return mid+1;
        }
        
        return mid-1;
    }
};