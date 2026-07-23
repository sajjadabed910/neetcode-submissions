class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=1,k=1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]-1==nums[i-1]){
                k++;
            }
            else{
                ans=max(ans,k);
                k=1;
            }
            ans=max(ans,k);
        }
        return ans;
    }
};
