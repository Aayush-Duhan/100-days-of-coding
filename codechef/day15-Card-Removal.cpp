#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        map<int, int> frequency;
        for (int num : A) {
            frequency[num]++;
        }
        
        int max_freq = 0;
        for (auto& pair : frequency) {
            if (pair.second > max_freq) {
                max_freq = pair.second;
            }
        }
        
        cout << N - max_freq << endl;
    }
    return 0;
}