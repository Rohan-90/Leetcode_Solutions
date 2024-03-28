class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i = 0; 
        while(i < nums.size()) {
            int a = i;
            while( i + 1 < nums.size() && (long long) (nums[i + 1]) - (long long)(nums[i]) == 1) i++; 
            if(a == i) ans.emplace_back(to_string(nums[a]));
            else ans.emplace_back(to_string(nums[a]) + "->" + to_string(nums[i]));
            i++;
        }
        return ans;
    }
};