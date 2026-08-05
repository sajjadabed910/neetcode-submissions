class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,low=101;

        for(int i=0;i<prices.size();i++){
            low = min(prices[i],low);
            profit= max((prices[i]-low),profit);
        }
        return profit;
    }
};
