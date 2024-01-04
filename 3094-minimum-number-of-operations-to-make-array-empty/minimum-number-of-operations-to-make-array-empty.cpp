class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size()){
            int it = i;
            while( it < nums.size() && nums[it] == nums[i]) it++;
            int count = it - i;
            if(count == 1) return -1;
            ans += count / 3;
            if(count % 3 != 0)ans++;
            i = it;
        }
        return ans;
    }
};