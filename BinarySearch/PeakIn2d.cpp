class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> ans(2);

        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[i].size(); j++) {
                //checking left and right and top and bottom
                if((j==0 || mat[i][j-1]<mat[i][j]) && (j==mat[i].size()-1 || mat[i][j+1]<mat[i][j]) && (i==0 || mat[i-1][j]<mat[i][j]) && (i==mat.size()-1 || mat[i+1][j]<mat[i][j])) {
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
            }
        }
        return {-1, -1};
    }
};
