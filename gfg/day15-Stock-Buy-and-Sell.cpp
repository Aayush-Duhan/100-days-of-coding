class Solution {
    public:
        int maxProfit(vector<int>& prices, int k) {
            int n = prices.size();
            if (n <= 1 || k == 0) return 0;
            if (k >= n / 2) {
                int max_profit = 0;
                for (int i = 1; i < n; ++i) {
                    if (prices[i] > prices[i - 1]) {
                        max_profit += prices[i] - prices[i - 1];
                    }
                }
                return max_profit;
            }
            
            vector<int> prev(n, 0);
            for (int j = 1; j <= k; ++j) {
                vector<int> curr(n, 0);
                int max_prev_buy = prev[0] - prices[0];
                for (int i = 1; i < n; ++i) {
                    curr[i] = max(curr[i - 1], prices[i] + max_prev_buy);
                    int possible_new_buy = prev[i] - prices[i];
                    if (possible_new_buy > max_prev_buy) {
                        max_prev_buy = possible_new_buy;
                    }
                }
                prev = curr;
            }
            
            return prev.back();
        }
    };