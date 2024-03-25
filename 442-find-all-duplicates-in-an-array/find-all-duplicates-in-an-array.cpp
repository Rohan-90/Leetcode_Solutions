class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int index = 0;
        while(index < nums.size()){
            int correct = nums[index] - 1;
            if(nums[index] != nums[correct]) swap(nums[index], nums[correct]);
            else index++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == i + 1) continue;
            else ans.push_back(nums[i]);
        }
        return ans;
    }
};