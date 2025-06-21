class Solution {
public:
  int NthRoot(int N, int num) {

    int i=1;
    int j=num;

      while(i<=j) {
        int a=i + (j-i)/2;
        long long ans=1;

        for(int i=0; i<N; i++) {
          ans=a*ans;
          if(ans>num) break;
        }

        if(ans==num) {
          return a;
        }

        else if(ans>num) {
          j=a-1;
        }

        else i=a+1;
      }

      return -1;
    }
};
