class Solution {
public:
vector<vector<int> >all_subs;
vector<int>curr_sub;
void getSub(vector<int>& nums,int idx,int n)
{
    if(idx==n)
    {
        all_subs.push_back(curr_sub);
        return;
    }
    curr_sub.push_back(nums[idx]);
    getSub(nums,idx+1,n);
    curr_sub.pop_back();
    getSub(nums,idx+1,n);
    return;
}

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        getSub(nums,0,n);
        return all_subs;
    }
};