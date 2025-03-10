#include <iostream>
using namespace std;

void decideRank(int dsaD, int tocD, int dmD, int dsaS, int tocS, int dmS) {
    int totalD = dsaD + tocD + dmD;
    int totalS = dsaS + tocS + dmS;
    
    if (totalD > totalS) {
        cout << "Dragon" << endl;
    } else if (totalD < totalS) {
        cout << "Sloth" << endl;
    } else {
        if (dsaD > dsaS) {
            cout << "Dragon" << endl;
        } else if (dsaD < dsaS) {
            cout << "Sloth" << endl;
        } else {
            if (tocD > tocS) {
                cout << "Dragon" << endl;
            } else if (tocD < tocS) {
                cout << "Sloth" << endl;
            } else {
                cout << "Tie" << endl;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int dsaD, tocD, dmD;
        int dsaS, tocS, dmS;
        cin >> dsaD >> tocD >> dmD;
        cin >> dsaS >> tocS >> dmS;
        decideRank(dsaD, tocD, dmD, dsaS, tocS, dmS);
    }
    return 0;
}