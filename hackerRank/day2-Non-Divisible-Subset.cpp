int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> remainderCount(k,0);
    for (int num : s) {
        remainderCount[num % k]++;
    }
    int maxsubsetSize = 0;
    if (remainderCount[0] > 0) {
        maxsubsetSize += 1;
    }
    if (k % 2 == 0 && remainderCount[k/2] > 0) {
        maxsubsetSize += 1;
    }
    for (int r = 1 ; r < (k + 1)/2 ; r++) {
        maxsubsetSize += max(remainderCount[r],remainderCount[k-r]);
    }
    return maxsubsetSize;
}