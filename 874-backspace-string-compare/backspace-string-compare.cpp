class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = 0;
        while(i < s.length()){
                if(s[i] == '#'){
                    if(i > 0){
                    s.erase(i - 1, 2);
                    i = i - 2;
                } 
                else{
                    s.erase(i,1);
                    i = i - 1;
                } 
            } 
            i++;
        }
        i = 0;
        while(i < t.length()){
     
            if(t[i] == '#'){
                if(i > 0){
                    t.erase(i - 1, 2);
                    i = i - 2;
                }
                else {
                    t.erase(i,1);
                    i = i - 1;
                }
            }
            i++;
                
        } 
        return s == t;
    }
};