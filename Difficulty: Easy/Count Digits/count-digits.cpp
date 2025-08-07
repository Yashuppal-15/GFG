class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp = n , rem = 0,out = 0;
        while(temp!=0){
            rem = temp%10;
            if(rem!= 0 && n%rem == 0) out++;
            temp = temp/10;
        }
        return out;
    }
};