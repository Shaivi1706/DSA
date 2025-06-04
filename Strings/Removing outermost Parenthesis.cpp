string removeOuterParentheses(string s) {
        string snew="";
        int count=0;

        for(int i=0; i<s.size(); i++) {
            char c = s[i];

            if(c=='(') {
                if(count>0) {
                    snew+=c;
                }
                count++;
            }
            else {
                count--;
                if(count>0) {
                    snew+=c;
                }
            }
        }
        return snew;
    }
