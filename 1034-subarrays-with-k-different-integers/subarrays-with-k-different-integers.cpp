class Solution {
public:
    int solve(vector<int>& nums, int k){
        int i = 0, j = 0, count = 0;
        unordered_map<int,int> m;
        while(j < nums.size()){
            m[nums[j]]++;
            while(m.size() > k){
                m[nums[i]]--;
                if(m[nums[i]] == 0) m.erase(nums[i]);
                i++;
            }
            count += j - i + 1;
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans = solve(nums,k);
        int sub = 0;
        if(k != 1) sub = solve(nums,k - 1);
        return ans - sub;
    }
};