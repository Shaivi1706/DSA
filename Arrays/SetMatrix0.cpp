class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows;
        vector<int> cols;
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        
        for(int r : rows) {
            for(int j = 0; j < matrix[0].size(); j++) {
                matrix[r][j] = 0;
            }
        }
        
        for(int c : cols) {
            for(int i = 0; i < matrix.size(); i++) {
                matrix[i][c] = 0;
            }
        }
    }
};
