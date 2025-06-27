class Solution {
public:
    int beautySum(string s) {
        int count=0;

        for(int i=0; i<s.size(); i++) {
            unordered_map<char, int> mp;
            for(int j=i; j<s.size(); j++) {
                mp[s[j]]++;

                int mini=INT_MAX;
                int maxi=INT_MIN;

                for(auto i:mp) {
                    mini=min(i.second, mini);
                    maxi=max(i.second, maxi);
                }

                count+=maxi-mini;
            }
        }

        return count;
    }
};
