#include <iostream>
#include <string>
using namespace std;

void findMinMaxDifference(string s1, string s2) {
    int minDiff = 0, maxDiff = 0;
    int n = s1.length();
    
    for (int i = 0; i < n; i++) {
        if (s1[i] == '?' || s2[i] == '?') {
            maxDiff++;
        } else if (s1[i] != s2[i]) {
            minDiff++;
            maxDiff++;
        }
    }
    
    cout << minDiff << " " << maxDiff << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        findMinMaxDifference(S1, S2);
    }
    return 0;
}