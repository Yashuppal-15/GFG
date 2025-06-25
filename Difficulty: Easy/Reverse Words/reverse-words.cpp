
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
         int n=s.size();
        stringstream ss(s);
        string hold;
        vector<string>pp;
        while(ss>>hold){
            pp.push_back(hold);
        }
        reverse(pp.begin(),pp.end());
        string temp;
        for(auto&k:pp ){
            string res;
            for(auto&p:k){
                res+=p;
            }
            temp+=res+" ";
            res.clear();
        }
        temp.pop_back();
        return temp;
    }
};