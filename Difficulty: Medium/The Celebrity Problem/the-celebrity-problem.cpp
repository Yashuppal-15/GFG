class Solution {
  public:
    int celebrity(vector<vector<int> >& M) {
        int n = M.size();
        stack<int> st;
        
        // push all persons into stack
        for(int i = 0; i < n; i++) {
            st.push(i);
        }
        
        // discard method to get a possible celebrity
        while(st.size() > 1) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            // if a knows b, a is not celebrity
            if(M[a][b]) {
                st.push(b);
            } else {
                // if a doesn't know b, b is not celebrity
                st.push(a);
            }
        }
        
        int cand = st.top(); st.pop();
        
        // celebrity should not know anyone (except themselves)
        for(int i = 0; i < n; i++) {
            if(i != cand && M[cand][i] != 0) {
                return -1;
            }
        }
        
        // everyone should know celebrity (except themselves)
        for(int i = 0; i < n; i++) {
            if(i != cand && M[i][cand] == 0) {
                return -1;
            }
        }
        
        return cand;
    }
};
