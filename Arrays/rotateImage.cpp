class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();

        vector<vector<int> > ans(n, vector<int>(n));

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                ans[j][n-i-1]=mat[i][j];
            }
        }

        mat=ans;
    }
};

___________________________________________________________

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();

        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        for(int i=0; i<n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};

