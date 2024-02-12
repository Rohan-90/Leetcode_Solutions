class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int value = nums[0];
        int count = 0;
        for(auto it : nums){
            if(count == 0){
                value = it;
                count = 1;
            }
            else if(it == value) count++;
            else count--;
        }
        return value;
    }
};