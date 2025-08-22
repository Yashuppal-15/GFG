class Solution {
  public:
//SPACE OTIMIZATION
    int solve(int idx,vector<int>&arr){
     int prev2=arr[0];
     int prev1=max(arr[0],arr[1]);
     
     for(int i=2;i<idx;i++){
         int pick=arr[i]+prev2;
         int notpick=0+prev1;
         int curr=max(pick,notpick);
         prev2=prev1;
         prev1=curr;
     }
        return prev1;
    }
    
    int findMaxSum(vector<int>& arr) {
    int n=arr.size();
    return solve(n,arr);
    
    }
};