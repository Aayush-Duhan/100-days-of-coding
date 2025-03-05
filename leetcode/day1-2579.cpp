class Solution {
    public:
        long long coloredCells(int n) {
            int to_add = 0;
            long long sum = 1;
            for (int i = 0; i < n; i++) {
                sum += to_add;
                to_add += 4;
            }
            return sum;
        }
    };