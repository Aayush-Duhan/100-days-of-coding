class Solution {
    public:
        int findMaxSum(vector<int>& arr) {
            int n = arr.size();
            // Since constraints guarantee n >= 1, we can start directly
            int prev2 = 0;        // Maximum loot up to house -1
            int prev = arr[0];    // Maximum loot up to the first house
            
            for (int i = 1; i < n; i++) {
                int loot_current = arr[i] + prev2;    // Loot current house
                int skip_current = prev;              // Skip current house
                int current = std::max(loot_current, skip_current);
                prev2 = prev;                         // Update prev2
                prev = current;                       // Update prev
            }
            
            return prev;
        }
    };