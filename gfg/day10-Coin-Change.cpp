class Solution {
    public:
      int count(vector<int>& coins, int sum) {
          vector<int> dp(sum + 1, 0);
      dp[0] = 1; // There's exactly 1 way to make sum 0 (use no coins)
  
      for(int coin : coins) {
          for(int s = coin; s <= sum; s++) {
              dp[s] += dp[s - coin];
          }
      }
      return dp[sum];
      }
  };
  