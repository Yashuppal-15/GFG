// Function to return Largest Number

class Solution {
  public:
    // Function to return the largest possible number of n digits
    // with sum equal to given sum.
    string largestNumber(int n, int sum) {
        // Your code here
          if(9*n<sum) return "-1";
        
        string ans ="";
        while(sum>0)
        {
            if(sum<=9){
                ans+=to_string(sum);
                sum=0;
            }
            else{
                ans+="9";
                sum-=9;
            }
          
        }
        while(ans.size()<n){
            ans+="0";
        }
        return ans;
    }
};