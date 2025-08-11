class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> st;
        vector<int> ans;
        for(auto i: a){
            st.insert(i);
        }
        for(auto j: b){
            st.insert(j);
        }
        while(!st.empty()){
            ans.push_back(*st.begin());
            st.erase(st.begin());
        }
        return ans;
    }
};