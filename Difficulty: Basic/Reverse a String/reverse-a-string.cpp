// User function Template for C++
class Solution {
  public:
    string revStr(string s) {
        // code here
        int i = 0, j = s.size()-1;
        while(i<=j) swap(s[i++],s[j--]);
        return s;
    }
};