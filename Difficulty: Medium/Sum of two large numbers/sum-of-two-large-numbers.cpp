// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        int m = s1.length();
        int n = s2.length();
        
        int carry = 0;
        string res = "";
        
        int i = m - 1;
        int j = n - 1;
        
        while(i >= 0 || j >= 0 || carry) {
            
            int a = (i >= 0) ? s1[i] - '0' : 0;
            int b = (j >= 0) ? s2[j] - '0' : 0;
            
            int sum = (a + b + carry);
            res.push_back((sum % 10) + '0');
            carry = sum / 10;
            
            i--;
            j--;
        }
        
        while(res.size() > 1 && res.back() == '0') { // handles case where zeros in s1 and s2 bcoz res size is 1
            res.pop_back();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};