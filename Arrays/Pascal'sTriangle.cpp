class Solution {
    //visualize n=5 for this problem
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int> > ans(n);
        for(int i=0; i<n; i++) {
            //important step
            ans[i].resize(i+1);
            
            //filling values with 1 first
            ans[i][0]=ans[i][i]=1;

            for(int j=1; j<i; j++) {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
            
        }

        return ans;
    }
};
