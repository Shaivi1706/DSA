class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0; i<n; i++) {
            int st=0;
            int e=m-1;

            while(st<=e)  {
                 int mid=st+(e-st)/2;
                if(matrix[mid][i]==target) {
                    return true;
                }
                else if(matrix[mid][i]<target) {
                    st=mid+1;
                }
                else {
                    e=mid-1;
                }
            }
        }
        return false;
    }
};
