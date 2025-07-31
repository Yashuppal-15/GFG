class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
         vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++)
        {
            v.push_back({arr[i],dep[i]});
        }
        sort(v.begin(),v.end());
        vector<int>v1;
        v1.push_back(v[0].second);
        for(int i=1;i<arr.size();i++)
        {
            int f=0;
            for(int j=0;j<v1.size();j++)
            {
                if(v[i].first>v1[j]){
                f=1;
                v1[j]=v[i].second;
                    break;
                }
            }
           if(f==0) 
           v1.push_back(v[i].second);
        }
        return v1.size();
    }
};
