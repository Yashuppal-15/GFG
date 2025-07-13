class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int n=arr.size();
        unordered_map<int, int> np;
        
        for(int i: arr){
           np[i]+=1;
        }
        
        for(int i=0;i<n;i++){
            if(np[arr[i]]>1) return (i+1);
        }
        return -1;
    }
};