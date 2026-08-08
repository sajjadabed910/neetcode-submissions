class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>w;

        int left=0,ans=0;
        for(int i=0;i<s.size();i++){
            while(w.find(s[i])!=w.end()){
                w.erase(s[left]);
                left++;
            }
            w.insert(s[i]);
            ans= max(ans,i-left+1);
        }
        return ans;
    }
};
