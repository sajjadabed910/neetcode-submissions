class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n;
        if(m!=0) n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[i][n-1]==target) return true;
            else if(matrix[i][n-1]>target){
                int l=0,r=n-1;
                while(l<=r){
                    int m=l+(r-l)/2;
                    if(matrix[i][m]==target) return true;
                    if(matrix[i][m]>target) r=m-1;
                    else l=m+1;
                }
                return false;
            }
        }
        return false;
    }
};
