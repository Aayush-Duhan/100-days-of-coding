class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            int white_count = count(blocks.begin(), blocks.begin() + k, 'W');
            int min_operations = white_count;
    
            for (int i = k; i < n; i++) {
                if (blocks[i] == 'W') white_count++;
                if (blocks[i - k] == 'W') white_count--;
                min_operations = min(min_operations, white_count);
            }
    
            return min_operations;
        }
    };