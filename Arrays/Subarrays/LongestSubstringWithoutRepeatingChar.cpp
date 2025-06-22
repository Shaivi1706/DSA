class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount=0;

        unordered_map <char, bool> mp;

        for(int head=0; head<s.size(); head++) {
            int tail=head;
            int count=0;

            for (auto& pair : mp) {
                pair.second = false;
            }

            while(!mp[s[tail]] && tail<s.size()) {
                mp[s[tail]]=true;
                count++;
                tail++;
            }
            maxCount=max(count, maxCount);
        }
        return maxCount;
    }
};
