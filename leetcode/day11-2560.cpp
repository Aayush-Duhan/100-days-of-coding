class Solution {
    public:
        int minCapability(vector<int>& nums, int k) {
            int lo = *min_element(nums.begin(), nums.end());
            int hi = *max_element(nums.begin(), nums.end());
            while (lo < hi) {
                int mid = lo + (hi - lo) / 2;
                int count = 0;
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] <= mid) {
                        count++;
                        i++;
                    }
                }
                if (count >= k)
                    hi = mid;
                else
                    lo = mid + 1;
            }
            return lo;
        }
    };