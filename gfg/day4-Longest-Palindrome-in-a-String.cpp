class Solution {
    public:
      string longestPalindrome(string s) {
      int n = s.length();
      if (n == 0) return "";
      
      int start = 0, maxLength = 1;
      
      for (int i = 0; i < n; i++) {
          // Odd length palindromes
          int low = i, high = i;
          while (low >= 0 && high < n && s[low] == s[high]) {
              if (high - low + 1 > maxLength) {
                  start = low;
                  maxLength = high - low + 1;
              }
              low--;
              high++;
          }
          
          // Even length palindromes
          low = i, high = i + 1;
          while (low >= 0 && high < n && s[low] == s[high]) {
              if (high - low + 1 > maxLength) {
                  start = low;
                  maxLength = high - low + 1;
              }
              low--;
              high++;
          }
      }
      
      return s.substr(start, maxLength);
  }
  };