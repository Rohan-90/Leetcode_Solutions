class Solution {
public:
    bool solve(string& it){
        int s = 0;
        int e = it.size() - 1;
        while(s <= e){
            if(it[s] != it[e]) return false;
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string it : words){
            bool ans = solve(it);
            if(ans == 1) return it;
        }
        return "";
    }
};