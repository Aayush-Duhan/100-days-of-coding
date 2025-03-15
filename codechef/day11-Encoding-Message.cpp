#include <iostream>
using namespace std;

string encodeMessage(string s, int n) {
    for (int i = 0; i + 1 < n; i += 2)
        swap(s[i], s[i + 1]);
    for (int i = 0; i < n; i++)
        s[i] = 'a' + ('z' - s[i]);
    return s;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        cout << encodeMessage(s, n) << endl;
    }
    return 0;
}
