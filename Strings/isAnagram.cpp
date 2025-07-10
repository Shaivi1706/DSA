class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        map<char, int > first;

        for(int i=0; i<s.size(); i++) {
            first[s[i]]++;
            first[t[i]]--;
        }

        for(auto i:first) {
            if(i.second!=0) return false;
        }
        return true;
    }
};
