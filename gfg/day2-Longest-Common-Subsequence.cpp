class Solution {
    public:
      int lcs(string &s1, string &s2) {
          int m = s1.size();
          int n = s2.size();
          vector<int> prev(n + 1, 0);
          for (int i = 1; i <= m ; i++) {
              vector<int> curr(n + 1, 0);
              for (int j = 1 ; j <= n ; j++) {
                  if (s1[i - 1] == s2[j - 1]) {
                      curr[j] = 1 + prev[j - 1];
                  }
                  else {
                      curr[j] = max(prev[j], curr[j - 1]);
                  }
              }
              prev = curr;
          }
          return prev[n];
      }
  };
  