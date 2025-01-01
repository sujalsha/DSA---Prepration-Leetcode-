class Solution {
public:
    int maxScore(string s) {
        int left = 0, right =1, mid=1, ans =0;
        while(mid<s.length()){
            left = mid-1;
            right = mid;
            int leftSum=0, rightSum=0;
            while(left>=0){
                if(s[left]=='0'){
                    leftSum++;
                }
                left--;
            }
            while(right<=s.length()-1){
                if(s[right]=='1'){
                    rightSum++;
                }
                right++;
            }
            ans = max(ans, (leftSum+rightSum));
            mid++;
        }
        return ans;
    }
};