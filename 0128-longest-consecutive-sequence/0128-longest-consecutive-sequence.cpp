class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; 
        
        set<int> num(nums.begin(), nums.end()); 
        int count = 1;  
        int ans = 1;    
        
        auto prev = num.begin(); 
        
        for(auto it = ++num.begin(); it != num.end(); it++) {
            if(*it == *prev + 1) { 
                count++;           
            } else {
                count = 1;         
            }
            ans = max(ans, count); 
            prev = it;             
        }
        
        return ans;
    }
};
