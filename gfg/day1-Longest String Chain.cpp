class Solution {
    public:
      int longestStringChain(vector<string>& words) {
          sort(words.begin(),words.end(),[&](string &a, string &b){
              return a.size() < b.size();
          });
          map<string,int>mp;
          int ans=0;
          for (string &str : words) {
              int val = 0;
              for (int i=0 ; i<str.size() ; i++) {
                  string temp = str.substr(0,i);
                  temp += str.substr(i+1);
                  if(mp.find(temp)!=mp.end()) {
                      val = max(val,mp[temp]);
                  }
              }
              mp[str]=val+1;
              ans = max(ans,mp[str]);
          }
          return ans;
      }
  };