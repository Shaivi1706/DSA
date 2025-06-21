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

_______________________________________________________________________________

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Finding max in mid column
            int maxRow = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            // Check neighbors
            bool leftOK = (mid == 0 || mat[maxRow][mid] > mat[maxRow][mid - 1]);
            bool rightOK = (mid == n - 1 || mat[maxRow][mid] > mat[maxRow][mid + 1]);

            if (leftOK && rightOK) {
                return {maxRow, mid};
            } else if (mid > 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return {-1, -1};
    }
};
