#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        if(N % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << ((X % 2 == 1) ? "YES" : "NO") << "\n";
        }
    }
    
    return 0;
}
