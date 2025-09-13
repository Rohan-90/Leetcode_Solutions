class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[lastNum] = nums[i];
                lastNum++;
            }
        }
        for(int i = lastNum; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};