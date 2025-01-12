class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length() % 2 != 0) return false;
        stack<int> open, openClose;
        for(int i = 0; i < s.length(); i++) {
            if(locked[i] == '0') {
                openClose.push(i);
            }
            else {
                if(s[i] == '(') open.push(i);
                else {
                    if(!open.empty()) open.pop(); 
                    else if(!openClose.empty()) openClose.pop();
                    else return false;
                }
               
            }
        }
        while(!open.empty() && !openClose.empty()) {
            if(open.top() < openClose.top()){
                open.pop();
                openClose.pop();
            }
            else return false;
        }
        return (open.empty() && openClose.size() % 2 == 0);
    }
};