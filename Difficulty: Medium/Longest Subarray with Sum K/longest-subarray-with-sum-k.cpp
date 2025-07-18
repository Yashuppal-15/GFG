class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
         unordered_map<int,int>prefixSum;
        int len=0;
        int sum=0;
       
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            
            if(sum==k)
                len=i+1;
                
               int rem=sum-k;
            if(prefixSum.find(rem)!=prefixSum.end()){
                len=max(len,i-prefixSum[rem]);
            }
            
            if(prefixSum.find(sum)==prefixSum.end()){
                prefixSum[sum]=i;
            }
            
        }
        return len;
    }
};