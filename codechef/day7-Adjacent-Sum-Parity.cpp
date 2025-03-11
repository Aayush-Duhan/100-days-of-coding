#include <bits/stdc++.h>
using namespace std;

bool canFormArrayB(const vector<int>& B) {
    int N = B.size();
    vector<int> A(N);
    A[0] = 0;  // Start with an arbitrary value for A[0]
    for (int i = 1; i < N; ++i) {
        A[i] = (B[i - 1] + A[i - 1]) % 2;
    }
    return ((A[0] + A[N - 1]) % 2 == B[N - 1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> B(N);
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }
        cout << (canFormArrayB(B) ? "YES" : "NO") << '\n';
    }
    return 0;
}
