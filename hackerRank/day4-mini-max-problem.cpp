void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long minSum = accumulate(arr.begin(), arr.begin() + 4, 0LL);
    long long maxSum = accumulate(arr.begin() + 1, arr.end(), 0LL);
    cout << minSum << " " << maxSum << endl;
}
