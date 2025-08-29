class Solution {
  public:
    int solveRec(string &s1, string &s2, int i, int j) {
        // base case
        if (i >= s1.size() || j >= s2.size())
            return 0;
            
        if (s1[i] == s2[j])     // match
            return 1+solveRec(s1, s2, i+1, j+1);
        
        return max(solveRec(s1, s2, i+1, j), solveRec(s1, s2, i, j+1));
    }
    int solveMem(string &s1, string &s2, int i, int j, vector<vector<int>> &dp) {
        // base case
        if (i >= s1.size() || j >= s2.size())
            return 0;
            
        if (dp[i][j] != -1)
            return dp[i][j];
            
        if (s1[i] == s2[j])     // match
            return dp[i][j] = 1+solveMem(s1, s2, i+1, j+1, dp);
        
        return dp[i][j] = max(solveMem(s1, s2, i+1, j, dp), solveMem(s1, s2, i, j+1, dp));
    }
    int solveTab(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        for (int i = n-1; i >= 0; i--) {
            for (int j = m-1; j>= 0; j--) {
                if (s1[i] == s2[j])     // match
                    dp[i][j] = 1 + dp[i+1][j+1];
                else
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
        
        return dp[0][0];
    }
    int solveSpace(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int> curr(m+1, 0);
        vector<int> next(m+1, 0);
        
        for (int i = n-1; i >= 0; i--) {
            for (int j = m-1; j>= 0; j--) {
                if (s1[i] == s2[j])     // match
                    curr[j] = 1 + next[j+1];
                else
                    curr[j] = max(next[j], curr[j+1]);
            }
            next = curr;
        }
        
        return next[0];
    }
    int lcs(string &s1, string &s2) {
        int i = 0, j = 0;
        int n = s1.size();
        int m = s2.size();
        
        // return solveRec(s1, s2, i, j);
        
        // vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        // return solveMem(s1, s2, i, j, dp);
        
        // return solveTab(s1, s2);
        
        return solveSpace(s1, s2);
    }
};