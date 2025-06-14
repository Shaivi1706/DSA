class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int n = s.length();  
        for (int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            if ((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) || 
                (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)) {
                return false;
            }

            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }

        return true;
    }
};

________________________________________________

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;

        if(s.size()!=t.size()) return false;

        for(int i=0; i<s.size(); i++) {
            if(st.count(s[i])){
                if(st[s[i]]!=t[i]) return false;
            }      
            else st[s[i]]=t[i];

            if(ts.count(t[i])) {
                if(ts[t[i]]!=s[i]) return false;
            }
            else ts[t[i]]=s[i];
        }

        return true;
    }
};

