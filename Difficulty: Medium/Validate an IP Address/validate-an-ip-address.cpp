class Solution {
  public:
    int isValid(string &s) {
        int i=0;
        int nums=0;
        int numsDot=0;
        bool wasLastDot=false;
        while(i<s.length()) {
            if(s.at(i)=='.') {
                if(wasLastDot) {
                    return false;
                }
                numsDot++;
                if(numsDot>3) {
                    return false;
                }
                wasLastDot=true;
                i++;
            } else {
                wasLastDot=false;
                string currNums="";
                while(i<s.length()&&s.at(i)!='.') {
                    currNums+=s.at(i);
                    if(s.at(i)-'0'<0||s.at(i)-'0'>9) {
                        return false;
                    }
                    i++;
                }
                if(currNums.length()>=2&&currNums.at(0)=='0') {
                    return false;
                }
                 int x=stoi(currNums);
                   nums++;
                if(nums>4) {
                    return false;
                }
                if(x>255) {
                    return false;
                }
            }
            
        }
        if(nums!=4 ||numsDot!=3) {
            return false;
        }
        return true;
    }
};