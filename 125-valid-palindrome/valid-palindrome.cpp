class Solution {
public:
    bool solve(string& a,int s, int e){
        while(s <= e){
            if(a[s] != a[e]) return false;
            else{
                s++;
                e--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        
        string a = "";
        for(char it : s){
            if(it >= 'A' && it <= 'Z'){
                char b = tolower(it);
                it = b;
            }
            if(it >= 'a' && it <= 'z' || it >= '0' && it <= '9') a += it;
            else continue;   
        }
        return solve(a,0,a.size() - 1);
    }
};