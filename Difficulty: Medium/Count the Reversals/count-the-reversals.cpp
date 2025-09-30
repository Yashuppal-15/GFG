class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        
        if(s.size() & 1){
            return -1;
        }
        
        int ans=0;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char brackets=s[i];
            if(brackets =='{'){
                st.push(brackets);
            }
            else{
                if(!st.empty() && st.top() == '{'){
                        st.pop();
                }
                       
                else{
                        st.push(brackets);
                }
            }
            
        }
    
        
        while(!st.empty()){
            char a= st.top(); st.pop();
            char b= st.top(); st.pop();
            if(a==b){
                ans+=1;
            }
            else{
                ans+=2;
            }
        }
        return ans;
    }
};
        


