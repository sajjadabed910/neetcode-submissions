class Solution {
public:
    int binary_Search(int l, int r, vector<int>& nums, int target){
        
        if(l>r) return -1;
        int mid=l+(r-l)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            return binary_Search(l,mid-1,nums,target);
        }
        else return binary_Search(mid+1,r,nums,target);
    }

    int search(vector<int>& nums, int target) {
        return binary_Search(0,nums.size()-1,nums,target); 
    }
};
