class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          vector<int> ans;
        int index = 0;
        while(index < nums.size()){
            int correct = nums[index] - 1;
            if(nums[index] != nums[correct]) swap(nums[index], nums[correct]);
            else index++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i+1) {
                ans.push_back(nums[i]);
                ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};