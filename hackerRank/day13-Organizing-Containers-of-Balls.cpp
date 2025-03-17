string organizingContainers(vector<vector<int>> container) {
    int n = container.size();
    vector<int> containerCapacity(n, 0);
    vector<int> typeCount(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            containerCapacity[i] += container[i][j];
            typeCount[j] += container[i][j];
        }
    }
    sort(containerCapacity.begin(), containerCapacity.end());
    sort(typeCount.begin(), typeCount.end());

    return (containerCapacity == typeCount) ? "Possible" : "Impossible";
}
