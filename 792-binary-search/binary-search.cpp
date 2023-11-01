class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            } 
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return ans;
    }
};