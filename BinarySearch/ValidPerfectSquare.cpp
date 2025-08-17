class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x==0 || x==1) return true;

        int i=0;
        long long j=x;
        while(i<=j) {
            int mid = i + (j-i)/2;

            if((long long)mid*mid==x) {
                return true;
            }
            else if((long long)mid*mid>x) {
                j=mid-1;
            }
            else {
                i=mid+1;
            }
        }
        return false;
    }
};
