class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
         sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            while(right>left){
                int sum=arr[i]+arr[left]+arr[right];
                if(sum==target ) return true;
                else if(sum<target) left++;
                else right--;
            }
           
        }
         return false;
    }
};