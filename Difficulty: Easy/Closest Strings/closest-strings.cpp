// User function template for C++
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {
        // Your code goes here
        int v1=-1,v2=-1,ans =INT_MAX;
        
        for(int i =0;i<s.size();i++){
            if(s[i] == word1){
                v1 = i;
            }
            if(s[i] == word2){
                v2 = i;
            }
            if(v1 != -1 && v2 != -1){
                ans = min(ans,abs(v2-v1));
            }
        }
        return ans;
    }
};