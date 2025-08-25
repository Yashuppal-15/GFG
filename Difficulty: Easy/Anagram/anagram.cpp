class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size()!=s2.size())
        return false;
        vector<int> ans(26,0);
        for(int i=0;i<s1.size();i++){
            ans[s1[i]-'a']++;
            ans[s2[i]-'a']--;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0)
            return false;
        }
        return true;
        
    }
};