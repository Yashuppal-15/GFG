// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int i = 0;
        int Vcount = 0;
        while(Vcount != count && i < s.size())
        {
            if(s[i++] == ch)
            {
                Vcount++;
            }
        }
        if (i == s.size())return "";
        return s.substr(i,s.size()-i);
    }
};