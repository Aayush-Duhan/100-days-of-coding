int flatlandSpaceStations(int n, vector<int> c) {
    if (n == c.size()) return 0;

    sort(c.begin(), c.end());

    int maxDistance = c[0]; 
    for (int i = 1; i < c.size(); i++) {
        maxDistance = max(maxDistance, (c[i] - c[i - 1]) / 2);
    }
    maxDistance = max(maxDistance, (n - 1 - c.back()));

    return maxDistance;
}
