// User function template for C++
class Solution {
  public:
    string removeUtil(string &str) {
        int n = str.size();
        
        unordered_set<int> numSet;
    
        bool duplicateFound = false;
    
        for(int i = 0; i < n-1; i++){
            if(str[i] == str[i+1]){
                numSet.insert(i);
                duplicateFound = true;
            }
            else if(duplicateFound){
                numSet.insert(i);
                duplicateFound = false;
            }
        }
    
        if(duplicateFound){
            numSet.insert(n-1);
        }
    
        if(numSet.empty()){
            return str;
        }
    
        string newstr;
        for(int i = 0; i < n; i++){
            if(numSet.find(i) == numSet.end()){
                newstr += str[i];
            }
        }
    
        return removeUtil(newstr);
    }
};