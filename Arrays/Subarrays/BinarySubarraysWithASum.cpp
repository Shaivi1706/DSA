class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //this step will give us subarrays which have sum=goal
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
    int atMost(vector<int>& nums, int goal){
        //making a window. here head will be right end and tail will be left.
        //sum will store initial sum and result will store number of subarrays
        int head, tail = 0, sum = 0, result = 0;
        for (head = 0; head < nums.size(); head++) {
            //adding the head to sum
            sum += nums[head];

            //checks the condition if sum>goal, then moves tail forward
            while (sum > goal && tail <= head) {
                sum -= nums[tail];
                tail++;
            }

            //result will have the number of subarrays equal to this
            result += head - tail + 1;
        }
        return result;
    }
};
