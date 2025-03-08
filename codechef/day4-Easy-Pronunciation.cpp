#include <iostream>
#include <string>
using namespace std;
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
string isEasyToPronounce(const string &s) {
    int consonantCount = 0;
    for (char ch : s) {
        if (!isVowel(ch)) {
            consonantCount++;
            if (consonantCount >= 4) {
                return "NO";
            }
        } else {
            consonantCount = 0;
        }
    }
    return "YES";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        cout << isEasyToPronounce(S) << endl;
    }
    return 0;
}