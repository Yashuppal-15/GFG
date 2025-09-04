class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        priority_queue<pair<int, int>> pq;
        int i=0;
        vector<int> ans;
        while(i<k){
            
            pq.push(make_pair(arr[i], i));
            i++;
        }
        ans.push_back(pq.top().first);
        for (i=k; i<arr.size(); i++){
            pq.push(make_pair(arr[i], i));
            while(pq.size() and pq.top().second < (i-k+1)){
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};