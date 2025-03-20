#include <iostream>
#include <vector>
using namespace std;

void canEraseString(int T, vector<pair<int, string>> &testCases) {
    for (auto &test : testCases) {
        int N = test.first;
        string S = test.second;

        vector<int> freq(26, 0);
        for (char c : S) {
            freq[c - 'a']++;
        }

        bool allEven = true;
        for (int count : freq) {
            if (count % 2 != 0) {
                allEven = false;
                break;
            }
        }

        cout << (allEven ? "YES" : "NO") << endl;
    }
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, string>> testCases(T);

    for (int i = 0; i < T; i++) {
        int N;
        string S;
        cin >> N >> S;
        testCases[i] = {N, S};
    }

    canEraseString(T, testCases);

    return 0;
}
