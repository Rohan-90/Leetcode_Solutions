class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int count = 0, count0 = 0;
        for(auto it : s){
            if(it == '1') count++;
            else count0++;
        }
        count--;
        while(count != 0){
          ans.push_back('1');
            count--; 
        }
        while(count0--){
            ans.push_back('0');
        }
        ans.push_back('1');
        return ans;
    }
};