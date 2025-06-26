class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        string doubled=s+s;

        //.find will return index at which substring will be found. if not found it will return not found value which is represented by string::npos
        if(doubled.find(goal)!=string::npos) return true;
        return false;
    }
};
