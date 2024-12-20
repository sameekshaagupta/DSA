class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=100000;
        int sell=0;
        for(int i=0; i<prices.size(); i++){
            buy=min(buy, prices[i]);
            sell=max(sell, prices[i]-buy);
        }
        return sell;
    }
};