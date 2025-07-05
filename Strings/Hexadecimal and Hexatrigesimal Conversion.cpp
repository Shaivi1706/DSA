class Solution {
    string dec(int n) {
        if(n==0) return "0";

        string hexDigits="0123456789ABCDEF";
        string ans="";

        while(n>0) {
            int rem=n%16;
            ans=hexDigits[rem]+ans;
            n/=16;
        }

        return ans;
    }
    string tri(int n) {
        if(n==0) return "0";

        string hexDigits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans="";

        while(n>0) {
            int rem=n%36;
            ans=hexDigits[rem]+ans;
            n/=36;
        }

        return ans;
    }
public:
    string concatHex36(int n) {
        string d=dec(n*n);
        string s=tri(n*n*n);
        return d+s;
    }
};
