class Solution {
    public:
        vector<int> sieve(int n) {
            vector<bool> isPrime(n + 1, true);
            isPrime[0] = isPrime[1] = false;
            for (int i = 2; i * i <= n; ++i) {
                if (isPrime[i]) {
                    for (int j = i * i; j <= n; j += i) {
                        isPrime[j] = false;
                    }
                }
            }
            vector<int> Prime;
            for (int i = 2; i <= n; ++i) {
                if (isPrime[i]) {
                    Prime.push_back(i);
                }
            }
            return Prime;
        }
    
        vector<int> closestPrimes(int left, int right) {
            if (left > right) return {-1, -1};
    
            vector<int> PrimesInRange;
            int limit = sqrt(right);
            vector<int> primes = sieve(limit);
            vector<bool> is_prime(right - left + 1, true);
            if (left == 1) is_prime[0] = false;
    
            for (int p : primes) {
                int start = max(p * p, ((left + p - 1) / p) * p);
                for (int j = start; j <= right; j += p) {
                    is_prime[j - left] = false;
                }
            }
    
            for (int i = left; i <= right; ++i) {
                if (is_prime[i - left]) {
                    PrimesInRange.push_back(i);
                }
            }
    
            if (PrimesInRange.size() < 2) return {-1, -1};
            int minDiff = INT_MAX;
            pair<int, int> closestPair = {-1, -1};
    
            for (size_t i = 1; i < PrimesInRange.size(); ++i) {
                int diff = PrimesInRange[i] - PrimesInRange[i - 1];
                if (diff < minDiff) {
                    minDiff = diff;
                    closestPair = {PrimesInRange[i - 1], PrimesInRange[i]};
                }
            }
    
            return {closestPair.first, closestPair.second};
        }
    };
    