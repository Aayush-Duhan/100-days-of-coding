#include <iostream>
#include <unordered_map>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    unordered_map<int, int> freq;
    int value;
    
    bool isValid = true;
    for (int i = 0; i < 2 * N; i++) {
        cin >> value;
        freq[value]++;
        if (freq[value] > 2) {  // If any element appears more than twice, it's invalid
            isValid = false;
        }
    }
    cout << (isValid ? "Yes" : "No") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
