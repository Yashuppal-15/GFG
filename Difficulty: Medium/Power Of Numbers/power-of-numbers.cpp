class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
         int a = n;
        int b = 0;
        
        while(n>0){
            b *= 10;
            b += n%10;
            n /= 10;
        }
        return pow(a,b);
    }
};