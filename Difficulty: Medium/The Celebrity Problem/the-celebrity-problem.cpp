class Solution {
  public:
    int celebrity(vector<vector<int> >& M) {
        int n = M.size();
        stack<int> st;
        
        for(int i = 0; i < n; i++) {                     // push all persons into stack
            st.push(i);
        }
        
        while(st.size() > 1) {                          // discard method to get a possible celebrity
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            if(M[a][b]) {                               // if a knows b, a is not celebrity
                st.push(b);
            } else {
                st.push(a);                             // if a doesn't know b, b is not celebrity
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
