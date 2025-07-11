class Solution {
public:
    bool isValid(string s) {
        stack<int> sta;

        for(int i=0; i<s.size(); i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                sta.push(s[i]);
            }

            else {
                if(sta.empty()) {
                    return false;
                }

                if(s[i]==')' && sta.top()=='(') {
                    sta.pop();
                }
                else if(s[i]=='}' && sta.top()=='{') {
                    sta.pop();
                }
                else if(s[i]==']' && sta.top()=='[') {
                    sta.pop();
                }
                else {
                    return false;
                }
            }
            
        }
        if(!sta.empty()) {
            return false;
        }

        return true;
    }
};
