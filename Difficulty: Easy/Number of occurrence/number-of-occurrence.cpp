class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int, int> freq;
        for(int num: arr){
            freq[num]++;
        }
        return freq[target];
    }
};
