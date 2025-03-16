#include <iostream>
using namespace std;

void find_winner(int A, int B) {
    int turn = 1;
    int candies = 1;
    
    while (true) {
        if (turn == 1) {
            if (A < candies) {
                cout << "Bob" << endl;
                return;
            }
            A -= candies;
        } else { // Bob's turn
            if (B < candies) {
                cout << "Limak" << endl;
                return;
            }
            B -= candies;
        }
        
        candies++;
        turn = 3 - turn; 
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        find_winner(A, B);
    }
    
    return 0;
}