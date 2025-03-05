#include<bits/stdc++.h>
using namespace std;
void solution(){
    int N;
    cin >> N;
    if (N == 3) {
        cout << "1 2 3" << endl;
        return;
    }
    cout << N << " " << N-2 << " ";
    for (int i=1 ; i<=N-4 ; i++) {
        cout << i << " ";
    }
    cout << N-3 << " " << N-1 << "\n";
}

int main() {
    int T;
    cin >> T;
    while(T--) solution();
    return 0;
}