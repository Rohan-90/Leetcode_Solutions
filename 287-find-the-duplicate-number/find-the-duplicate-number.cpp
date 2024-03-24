class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        while(fast != NULL){
            fast = nums[fast];
            if(fast != nums.size()){
                fast = nums[fast];
                slow = nums[slow];
            }
            if(fast == slow) break;
        }
        slow = nums[0];
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
            
        }
        return slow;
    }   
};