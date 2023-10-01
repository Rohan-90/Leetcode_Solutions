class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n = nums.size();
        m[0] = 1;
        int sum = 0;
        int count = 0;
        for(auto it : nums){
            sum += it;
            if(m.find(sum - k) != m.end()) count += m[sum - k];
            m[sum]++;
        }
        return count;
    }
};