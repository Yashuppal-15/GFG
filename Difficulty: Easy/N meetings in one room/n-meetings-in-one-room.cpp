class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int count=0;
        vector<pair<int, int>> p;
        for(int i=0; i<start.size(); i++){
            p.push_back({end[i], start[i]});
        }
        int e=-1;
        sort(p.begin(), p.end());
        for(int i=0; i<p.size(); i++){
            if(p[i].second > e){
                e=p[i].first;
                count++;
            }
        }
        return count;
    }
};