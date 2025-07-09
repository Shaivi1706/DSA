// brute force approach
class Solution {
public:
    int numberOfSubstrings(string s) {
        int result=0;
        for(int i=3; i<=s.size(); i++) {
            for(int j=0; j<=s.size()-i; j++) {
                unordered_map<char, int> mp;

                for(int k=0; k<i; k++) {
                    mp[s[k+j]]++;
                }

                if(mp.count('a') && mp.count('c') && mp.count('b')) {
                    result++;
                }
            }
        }
        return result;
    }
};

//optimal with sliding window
class Solution {
public:
    int numberOfSubstrings(string s) {
        // use an array to store values of a b and c
        int count[3]={0};
        int res=0;
        // this will be left part of window
        int left=0;

        // iterating right part of window
        for(int right=0; right<s.size(); right++) {
            count[s[right]-'a']++;

            while(count[0] && count[1] && count[2]) {
                // in 'abcabc', substring 'abc' counts; so 'abca', 'abcab', 'abcabc' will also count. so this is achieved by
                res+=s.size()-right;
                count[s[left]-'a']--;
                left++;
            }
        }
        return res;
    }
};
