class Solution {
public:
    void validPermutations(vector<vector<int>>& ans, vector<int>& nums, int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            validPermutations(ans, nums, index + 1);
            swap(nums[index], nums[i]);     
        }
    } 
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        validPermutations(ans, nums, 0);
        return ans;
    }
};