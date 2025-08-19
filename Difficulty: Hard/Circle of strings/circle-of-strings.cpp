// User function Template for C++

class Solution {
  public:
   void dfs(int node , vector<int>&visited,vector<int> adj[])
  {
      visited[node]=1;
      for(int i=0;i<adj[node].size();i++)
      {
          if(!visited[adj[node][i]])
          dfs(adj[node][i],visited,adj);
      }
  }
    int isCircle(vector<string> &arr) {
        // code here
        vector<int>adj[26];
        vector<int>in(26);  //incomin edge
        vector<int>out(26);   //outgoing edge
        vector<int>visited(26,0);
        int n =arr.size();
        for(int i=0;i<n;i++)
        {
            string s=arr[i];
            char a=s[0];
            char b=s[s.size()-1];
            adj[a-'a'].push_back(b-'a');
            in[b-'a']++;
            out[a-'a']++;
        }
        int node=-1;
        for(int i=0;i<26;i++)
        {
            if(in[i]!=out[i])
            {
                return 0;
            }
            if(in[i]) node=i;
        }
        dfs(node,visited,adj);
        for(int i=0;i<26;i++)
        {
            if(!visited[i]&&in[i])
            return 0;
        }
        return 1;
    }
};