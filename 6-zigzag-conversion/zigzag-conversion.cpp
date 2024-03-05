class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> st(numRows);
        int i = 0;
        while(i < s.size()){
            for(int index = 0; index < numRows && i < s.size(); index++){
                st[index] += s.at(i);
                i++;
            }
            for(int index = numRows - 2; index > 0 && i < s.size(); index--){
                st[index] += s.at(i);
                i++;
            }
        } 
        string ans = "";
        for(auto it : st) ans += it;
        return ans;
    }
};