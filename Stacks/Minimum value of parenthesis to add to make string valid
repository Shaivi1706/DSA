int minAddToMakeValid(string s) {
        stack<int> st;

        int count=0;

        for(int i=0; i<s.size(); i++) {
            if(s[i]=='(') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) {
                    count++;
                }
                else {
                    st.pop();
                }
            }
        }

        while(!st.empty()) {
            count++;
            st.pop();
        }

        return count;
    }
