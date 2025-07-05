//optimal
unordered_set<string> seen;
        vector<string> ans;
        string temp="";

        for(char c:s) {
            temp+=c;
            if(!seen.count(temp)) {
                ans.push_back(temp);
                seen.insert(temp);
                temp="";
            }
        }

return ans;

//brute force approach
vector<string> ans;
        string temp="";
        temp+=s[0];
        ans.push_back(temp);
        temp="";
        for(int i=1; i<s.size(); i++){
            temp+=s[i];
            bool in=true;

            for(int j=0; j<ans.size(); j++) {
                if(temp==ans[j]) {
                    in=false;
                    break;
                }
            }

            if(in) {
                ans.push_back(temp);
                 temp="";
            }
        }

        return ans;
