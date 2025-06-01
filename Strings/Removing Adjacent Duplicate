string removeDuplicates(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++) {
            if (!st.empty() && s[i] == st.top()) {
            st.pop(); 
            } else {
            st.push(s[i]);
            }
        }

        s="";

        while(!st.empty()) {
            s+=st.top();
            st.pop();
        }

        int i=0; 
        int j=s.size()-1;

        while(i<j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }

        return s;
    }
