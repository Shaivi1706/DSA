Input: s = "the sky is blue"
Output: "blue is sky the"

string reverseWords(string s) {
        vector<string> result;
        string snew="";

        for(int i=0; i<s.size(); i++) {
            char c=s[i];

            if(isspace(c)) {
                if(!snew.empty()) {
                    result.push_back(snew);
                    snew="";
                }
            }
            else {
                snew+=c;
            }
        }

        if (!snew.empty()) {
        result.push_back(snew);
    }

        s="";
        for(int i=result.size()-1; i>=0; i--) {
            s+=result[i];
            if (i != 0) s += " ";
        }

        return s;
    }
