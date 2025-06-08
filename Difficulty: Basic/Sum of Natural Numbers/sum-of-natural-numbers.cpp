
class Solution {
  public:
    int seriesSum(int n) {
        // code here
             if(n==0) return 0;
        int sum =0;
        for( int i = 1; i<=n; i++){
            sum = sum +  i;
        }
        return sum;
    }
};
