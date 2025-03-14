class Solution {
    public:
        int maximumCandies(vector<int>& candies, long long k) {
            if (k == 0) return 0;
            
            int left = 1, right = 0;
            for (int candy : candies) {
                right = max(right, candy);
            }
            
            int result = 0;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                
                long long childrenCount = 0;
                for (int candy : candies) {
                    childrenCount += candy / mid;
                }
                
                if (childrenCount >= k) {
                    result = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            return result;
        }
    };