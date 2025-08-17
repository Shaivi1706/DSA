class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;

        int i=0;
        long long j=x;
        long long ans=0;
        while(i<=j) {
            int mid = i + (j-i)/2;

            if((long long)mid*mid==x) {
                return mid;
            }
            else if((long long)mid*mid>x) {
                j=mid-1;
            }
            else {
                ans=mid;
                i=mid+1;
            }
        }
        return ans;
    }
};
