char getMaxOccuringChar(string& s) {
        // Your code here
        map<char, int> ans;
        
        for(int i=0; i<s.size(); i++) {
            ans[s[i]]++;
        }
        int max=0;
        char c='a';
        for(auto a:ans) {
            if(max<a.second) {
                max=a.second;
                c=a.first;
            }
        }
        return c;
    }
