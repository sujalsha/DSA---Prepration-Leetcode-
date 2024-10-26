class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, maxprofit =0, buy = prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<=buy){
                buy = prices[i];
                continue;
            }
            
            profit =  prices[i] - buy;
            
            maxprofit = max(profit, maxprofit);
        }
        return maxprofit;
    }
};