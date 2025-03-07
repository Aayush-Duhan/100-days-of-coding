#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> oddIndexes, evenIndexes, arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i % 2 == 0)
            evenIndexes.push_back(arr[i]);
        else
            oddIndexes.push_back(arr[i]);
    }
    sort(oddIndexes.begin(), oddIndexes.end());
    sort(evenIndexes.begin(), evenIndexes.end(), greater<int>());
    for (int i = 0; i < min(oddIndexes.size(), evenIndexes.size()) && k > 0; i++) {
        if (oddIndexes[i] < evenIndexes[i]) {
            swap(oddIndexes[i], evenIndexes[i]);
            k--;
        }
    }
    int oddSum = accumulate(oddIndexes.begin(), oddIndexes.end(), 0);
    int evenSum = accumulate(evenIndexes.begin(), evenIndexes.end(), 0);
    cout << (oddSum > evenSum ? "YES" : "NO") << "\n";
}

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }

    return 0;
}
