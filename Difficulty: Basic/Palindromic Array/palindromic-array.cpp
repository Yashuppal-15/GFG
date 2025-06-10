class Solution {
  public:
  int fuc(int n){
      int z=n;
      int r,s=0;
      while(n!=0){
          r=n%10;
          s=s*10+r;
          n=n/10;
      }
      if(z==s)
      return 1;
      else
      return 0;
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        int y=0;
        for(int i=0;i<arr.size();i++){
         y=y+fuc(arr[i]);
        }
        if(y==arr.size())
        return true;
        else
         return false;
         
    }
}; 