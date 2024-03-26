class Solution {
public:
    string addStrings(string a, string b) {
        string ans = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while(i >= 0 && j >= 0){
            int sum = (a[i] - '0') + (b[j] - '0') + carry;
            ans += (sum % 10 + '0');
            carry = (sum / 10);
            i--;
            j--;
        }
        while(i >= 0){
            int sum = (a[i] -'0') + carry;
            ans += (sum % 10 + '0');
            carry = (sum / 10);
            i--;
        }
        while(j >= 0){
            int sum = (b[j] - '0') + carry;
            ans += (sum % 10 + '0');
            carry = (sum / 10);
            j--;
        }
        if(carry) ans += (carry + '0');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};