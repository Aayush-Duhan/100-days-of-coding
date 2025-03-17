#include <iostream>
using namespace std;

class Solution {
public:
    void findWinner(int T) {
        while (T--) {
            int A, B, C;
            cin >> A >> B >> C;

            if (A > 50)
                cout << "A" << endl;
            else if (B > 50)
                cout << "B" << endl;
            else if (C > 50)
                cout << "C" << endl;
            else
                cout << "NOTA" << endl;
        }
    }
};

int main() {
    int T;
    cin >> T;
    Solution sol;
    sol.findWinner(T);
    return 0;
}
