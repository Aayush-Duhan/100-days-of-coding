#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        long long stored = 0;
        bool possible = true;
        int fail_day = -1;
        
        for(int i = 0; i < N; i++) {
            long long total = stored + A[i];
            if(total < K) {
                possible = false;
                fail_day = i + 1;
                break;
            }
            stored = total - K;
        }
        
        if(possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO " << fail_day << endl;
        }
    }
    return 0;
}