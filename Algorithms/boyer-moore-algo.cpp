class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //using boyer-moore algo.
        //we will create 4 int to store values. 
        //2 to store count and 2 to store what is to be added in ans

        int count1=0, count2=0;
        int cand1=0, cand2=0;

        for(int i=0; i<nums.size(); i++) {
            int a=nums[i];
            //normally increasing by 1 if cand is same
            if(a==cand1) {
                count1++;
            }
            else if(a==cand2) {
                count2++;
            }

            //if new value comes that might take place, we will do this
            else if(count1==0) {
                cand1=a;
                count1=1;
            }
            else if(count2==0) {
                cand2=a;
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
        }
        //now we have the elements which might have freq greater than n/3.
        // to confirm we will do :-
        count1=0, count2=0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==cand1) count1++;
            else if(nums[i]==cand2) count2++;
        }

        //now make a vector and store values
        vector<int> ans;
        if(count1>nums.size()/3) ans.push_back(cand1);
        if(count2>nums.size()/3) ans.push_back(cand2);

        return ans;
    }
};
