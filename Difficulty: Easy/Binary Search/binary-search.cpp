class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
         int n = arr.size();
        int start  = 0;
        int end = n-1;
      
        int answer = INT_MAX;
        
        while(start <= end){
            
            int  mid = start + (end-start)/2;
        
            if(arr[mid] == k){
                // if(mid < answer){
                 answer = mid;
                // }
                // end = mid;
                
                while((mid-1) >-1 && arr[mid-1]==k){
                    mid  = mid-1;
                    answer  = mid;
                }
                return mid;
             
            }
            else if (arr[mid] > k ){
                end = mid-1;
            }
            else {
                start =  mid+1;
            }
        }
        
        return -1;
    }
};