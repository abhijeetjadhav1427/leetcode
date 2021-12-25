class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=-1;
        int ans=0;
        for(int i=0; i<prices.size()-1; i++){
            if(b==-1 && prices[i] < prices[i+1]) b=prices[i];
            else if(b!=-1 && prices[i] > prices[i+1]){
                ans += prices[i]-b;
                b=-1;
            }
        }
        if(b!=-1) ans += prices[prices.size()-1]-b;
        return ans;
    }
};