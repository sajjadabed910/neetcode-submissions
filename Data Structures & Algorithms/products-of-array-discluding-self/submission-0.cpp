class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int>product(nums.size(),0);
        int ans=1,zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            if(zero>1) ans=0;
            else if(nums[i]!=0) ans*=nums[i];
        }
        if(zero>1){
            return product;
        }
        else if(zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) {
                    product[i]=ans;
                    return product;
                }
            }
        }
        else {
            for(int i=0;i<nums.size();i++){
                product[i]=ans/nums[i];
            }
            return product;
        }
    }
};
