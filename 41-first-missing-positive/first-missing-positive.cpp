class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool contain = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) contain = true;
            if(nums[i] <= 0 || nums[i] > nums.size()) nums[i] = 1;
        }
        if(contain == false) return 1; 
        for(int i = 0; i < nums.size(); i++){
            int x = abs(nums[i]);
            int idx = x - 1;
            if(nums[idx] < 0) continue;
            nums[idx] *= -1;  
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) return i + 1;
        }
        return nums.size() + 1;
    }
};