class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> map;
        
        for(auto i : arr) map[i]++;
        
        vector<pair<int, int>> v;
        
        for(auto i : map){
            v.push_back({i.first, i.second});
        }
        
        sort(v.begin(), v.end(),[](pair<int, int>a,pair<int, int>b){
           if(a.second==b.second) return a.first<b.first;
           return a.second>b.second;
        });
        
        vector<int> ans;
        
        for(auto i : v){
            for(int j = 0;j<i.second;j++) ans.push_back(i.first);
        }
        
        return ans;
    }
};

