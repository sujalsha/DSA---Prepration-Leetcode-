// class Solution {
// public:
    
//     int climbStairs(int n) {
//         // if(n<=1) return 1;
//         // else if(n==2) return 2;
//         // int a = 1, b=1, c=2;
//         // for(int i=2; i<=n;i++){
//         //     c = a+b;
//         //     a=b;
//         //     b=c;
//         // }
//         // return c;
//     }
// };
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};