class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;

        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
                count += mp[s[i + 1]] - mp[s[i]];
                i++;
            } else {
                count += mp[s[i]];
            }
        }
        return count;
    }
};
