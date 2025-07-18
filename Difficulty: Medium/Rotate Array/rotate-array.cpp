class Solution {
  public:
    
    void reverse(vector<int>& arr,int i,int j)
    {
        while(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
  
    void rotateArr(vector<int>& arr, int d) {
       
        int n = arr.size();
        d = d % n;
        reverse(arr, 0 , d - 1);
        reverse(arr, d , arr.size() - 1);
        reverse(arr, 0, arr.size() - 1);
        
    }
};

