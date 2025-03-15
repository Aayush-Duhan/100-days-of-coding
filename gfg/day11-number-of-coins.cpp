class Solution {
public:
    int minCoins(vector<int> &coins, int sum) {
        vector<int> dp(sum + 1, sum + 1);
        dp[0] = 0;
        for (int i = 1; i <= sum; i++) {
            for (int coin : coins) {
                if (i >= coin) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp[sum] > sum ? -1 : dp[sum];
    }
};