class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int lasti = 0;
       for(int  i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[lasti] = nums[i];
                lasti++;
            }
       }
       for(int i = lasti; i < nums.size(); i++) nums[i] = 0;
    }
};