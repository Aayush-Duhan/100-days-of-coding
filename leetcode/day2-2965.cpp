class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
        int total = n * n;
        long long S = (long long)total * (total + 1) / 2;
        long long S2 = (long long)total * (total + 1) * (2 * total + 1) / 6;
        long long gridSum = 0, gridSumSq = 0;
        for (const auto& row : grid) {
            for (int num : row) {
                gridSum += num;
                gridSumSq += (long long)num * num;
            }
        }
        long long diff = gridSum - S;
        long long diffSq = gridSumSq - S2;
        long long sumAB = diffSq / diff;
        int a = (diff + sumAB) / 2;
        int b = sumAB - a;
        return {a, b};
        }
    };
    