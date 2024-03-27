class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i = 0, count = 0;
        while(i < nums.size()){
            int j = i;
            int product = 1;
            while(j < nums.size()){
                product *= nums[j];
                if(product < k) count++;
                else break;
                j++;
            }
            i++;
        }
        return count; 
    }
};