class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_till_now = INT_MAX;
        int max_profit = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < min_till_now)
                min_till_now = prices[i];
            else
                max_profit = max(max_profit,prices[i] - min_till_now);
        }
        return max_profit;
            
    }
};
