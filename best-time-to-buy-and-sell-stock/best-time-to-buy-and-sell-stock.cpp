class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int b = 1e6;
        for(int i=0; i<prices.size(); i++){
            if(b > prices[i]) b = prices[i];
            else {
                profit = max(prices[i]-b, profit);
            }
        }
        return profit;
    }
};