class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int size = (int)arr.size() ; 
        int start = 0 , end = size-1 ; 
        
        while(start < end){
            swap(arr[start++] , arr[end--]);
        }
    }
};