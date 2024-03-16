class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len = 0;
        unordered_map<int,int> m;
        int sum = 0;
        m[0] = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) sum += 1;
            else sum += -1;
            if(m.find(sum) != m.end()) len = max(len, i - m[sum]);
            else m[sum] = i;
        }
        return len;
    }
};