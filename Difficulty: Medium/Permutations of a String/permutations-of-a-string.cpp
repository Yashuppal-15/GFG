class Solution {
  public:
      set<string> result;
    
    void solve(string &s, int index) {
        if(index==s.size()) {
            result.insert(s);
            return;
        }
        
        for(int i = index; i<s.size();i++) {
            swap(s[i],s[index]);
            solve(s, index+1);
            swap(s[i],s[index]);
        }
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        solve(s,0);
        return vector<string> (result.begin(), result.end());
    }
};