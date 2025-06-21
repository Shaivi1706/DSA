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

_____________________________________________________________________

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int start=0;
        int end=m-1;

        while(start<=end) {
            int mid=start+(end-start)/2;

            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target) {
                // here target is present and we have to search in row now

                int s=0;
                int e=n-1;

                while(s<=e) {
                    int ans=s+(e-s)/2;

                    if(matrix[mid][ans]==target) {
                        return true;
                    }
                    else if(matrix[mid][ans]>target) {
                        e=ans-1;
                    }
                    else {
                        s=ans+1;
                    }
                }
                return false;
            }

            else if(matrix[mid][0]>target) {
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }

        return false;
    }
};
