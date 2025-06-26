class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int count=0;

        for(int i=0; i<s.size(); i++) {
            if(s[i]=='(') {
                st.push(s[i]);
                int size=st.size();
                count=max(count, size);
            }
            else if(s[i]==')' && !st.empty()) {
                st.pop();
            }
        }

        return count;
    }
};
