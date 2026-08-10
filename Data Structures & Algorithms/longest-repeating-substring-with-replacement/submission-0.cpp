class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);

        int f=0,left=0,ans=0;

        for(int i=0;i<s.size();i++){
            count[s[i]-'A']++;

            f=max(f,count[s[i]-'A']);
            
            while((i-left+1)-f > k){
                count[s[left]-'A']--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
