class Solution {
  public:
    bool check(string s) {
        // code here.
        char first=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]!=first){
                return false;
            }
        }
        return true;


    }
};