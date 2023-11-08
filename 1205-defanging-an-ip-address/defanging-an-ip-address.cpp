class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0; i < address.size(); i++){
            char ch = address[i];
            if(ch == '.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            } 
            else ans.push_back(ch);
        }
        return ans;
    }
};