class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            return a.second>b.second;
        });

        for(auto u:p){
            //cout<<u.first<<" "<<u.second<<"\n";
            result.push_back(u.first);
            k--;
            if(k==0) break;
        }

        return result;
    }
};
