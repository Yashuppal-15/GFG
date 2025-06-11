// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
         int n = arr.size();
        
        for(int i=1;i<n;i++){
            arr[0]=arr[0]+arr[i];
        }
        
        return arr[0];
    }
};