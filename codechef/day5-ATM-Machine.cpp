#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    string atmMachine(int N, int K, vector<int> &A) {
        string res;
        for (int i = 0; i < N; i++) {
            if (K >= A[i]) {
                res.push_back('1');
                K -= A[i];
            } else {
                res.push_back('0');
            }
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution sol;
        cout << sol.atmMachine(N, K, A) << "\n";
    }
    return 0;
}
