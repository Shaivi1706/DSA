class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star;

        //we will store indices at which we find '(' and '*'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else {  // ')'
                if (!open.empty()) {
                    open.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;
                }
            }
        }

        // Now matching remaining '(' with '*' that appear later
        while (!open.empty() && !star.empty()) {
            if (open.top() < star.top()) {
                open.pop();
                star.pop();
            } else {
                // * before ( can't match
                return false;
            }
        }

        return open.empty();
    }
};
