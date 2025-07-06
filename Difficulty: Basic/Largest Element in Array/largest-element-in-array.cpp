class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int count =arr[0];
        for(int i=1;i<n;i++){
            count=max(arr[i],count);
        }
        return count;
    }
};
