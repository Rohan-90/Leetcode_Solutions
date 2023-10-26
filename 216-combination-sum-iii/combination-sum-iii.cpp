class Solution {
public:
    void combination(int index, int k, int n, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds){
        if(k == ds.size()){
            if(n == 0){
                ans.push_back(ds);
                return;
            } 
            if(n < 0) return;
        }
        if(index  == nums.size()) return;
        
        ds.push_back(nums[index]);
        combination(index + 1, k, n - nums[index], nums, ans, ds);
        ds.pop_back();
        combination(index + 1, k, n, nums, ans, ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> ds;
        combination(0, k, n, nums, ans, ds);
        return ans;
    }
};