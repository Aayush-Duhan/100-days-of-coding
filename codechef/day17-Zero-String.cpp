#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        int countOnes = 0, countZeros = 0;
        for (char ch : S) {
            if (ch == '1')
                countOnes++;
            else
                countZeros++;
        }
        int result = min(countOnes, 1 + countZeros);
        cout << result << "\n";
    }
    
    return 0;
}
