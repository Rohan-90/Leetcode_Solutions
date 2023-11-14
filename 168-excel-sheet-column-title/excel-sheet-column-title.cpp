class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ="";
        char store[26];
        for(int i = 0; i < 26; i++){
            store[i] = 'A' + i;
        }
        if(columnNumber <= 26){
            ans += store[columnNumber-1];
            return ans;
        }
        else{
            while(columnNumber){
            int mod = (columnNumber - 1) % 26;
            ans += store[mod];
            columnNumber = (columnNumber - 1) / 26; 
            }
        } 
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};