class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>>m;
        string s;
        for(int i=0;i<strs.size();i++){
            s=strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        for(auto u:m){
            result.push_back(u.second);
        }
        return result;
    }
};
