class Solution {
public:
    static bool myComp(int& a, int& b){
        string aa = to_string(a);
        string bb = to_string(b);

        if(aa + bb > bb + aa) return true;
        return false;
    };
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), myComp);
        string ans = "";
             if (nums[0] == 0) {
            return "0";
        }
        for(int it : nums){
            ans += to_string(it);
        }
        return ans;
    }
};