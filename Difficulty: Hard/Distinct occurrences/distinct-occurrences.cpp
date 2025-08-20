class Solution {
  public:
    int solve(string s1,string s2,int i,int j,int n,int m,vector<vector<int>> &t){
        if(j==m) return 1;
        if(i==n && j<m) return 0; 
        if(t[i][j]!= -1) return t[i][j];
        
        if(s1[i] == s2[j]){
            return t[i][j] = solve(s1,s2,i+1,j+1,n,m,t) + solve(s1,s2,i+1,j,n,m,t);
        } else {
            return t[i][j] = solve(s1,s2,i+1,j,n,m,t);
        }
    }

    int subseqCount(string &txt, string &pat) {
        int n = txt.size();
        int m = pat.size();  
        vector<vector<int>> t(n+1, vector<int>(m+1,-1));
        return solve(txt,pat,0,0,n,m,t);
    }
};