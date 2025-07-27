class Solution {
  public:
  int count(string &s, int k){
       int l=0, cnt=0, dst=0;
        vector<int>fq(26,0);
        for(int r=0;r<s.length(); r++){
            int ch=s[r];
            if(fq[ch-'a']==0) dst++;
            fq[ch-'a']++;
            
            while(dst>k){
                fq[s[l]-'a']--;
                if(fq[s[l]-'a']==0) dst--;
                l++;
            }
            cnt +=r-l+1;
            
        }
        return cnt;
  }
    int countSubstr(string& s, int k) {
        // code here.
       int extK = count(s,k) - count(s,k-1); // exactK= atmostK-atmostK-1
       return extK;
    }
};