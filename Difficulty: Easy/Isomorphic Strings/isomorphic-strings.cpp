class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
     vector<pair<char, vector<int>>> v1, v2;

for (int i = 0; i < s1.size(); i++) {
    char k1 = s1[i], k2 = s2[i];
    bool f1 = false, f2 = false;
    for (auto &p : v1) if (p.first == k1) { p.second.push_back(i); f1 = true; break; }
    for (auto &p : v2) if (p.first == k2) { p.second.push_back(i); f2 = true; break; }
    if (!f1) v1.push_back({k1, {i}});
    if (!f2) v2.push_back({k2, {i}});
}
for (int i = 0; i < min(v1.size(), v2.size()); i++) {
    if (v1[i].second != v2[i].second) {
     return 0;}
}

 

        return 1;
    }
};