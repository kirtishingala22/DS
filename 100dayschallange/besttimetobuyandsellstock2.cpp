class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int final_profit = 0;
    int n = prices.size();

    for (int i = 0; i < n - 1; ++i) {
        if (prices[i + 1] > prices[i]) {
            final_profit =  final_profit + prices[i + 1] - prices[i];
        }
    }

    return final_profit;
    }
};