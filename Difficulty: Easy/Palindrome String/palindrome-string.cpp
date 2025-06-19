class Solution {
  public:
    // Function to check if a string is a palindrome.
   bool helper(string &s , int i , int j)
    {
        if(i>j)
        {
            return true;
        }
        else if(s[i]!=s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
            helper(s,i,j);
        }
    }
    
    bool isPalindrome(string& s) {
       
        int i=0;
        int j=s.length()-1;
        
        bool ans = helper(s ,i , j);
        return ans;
    }
};