class Solution {
public:
    // bool solve(vector<int>& ans){
    //     for(int i = 0; i < ans.size() - 1; i++){
    //         if(ans[i] > ans[i + 1]) return false;
    //     }
    //     return true;
    // }
    bool check(vector<int>& nums) {
        // vector<int> ans(nums.size());
        // int k = 0;
        // while(k < nums.size()){
        //     for(int i = 0 ; i < nums.size(); i++){
        //     ans[i] = nums[(i + k)% nums.size()];
        //     }
        //     if(solve(ans) == true) return true;
        //     k++;
        // }
        // return false;
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(i == 0 && nums[nums.size() - 1] > nums[i]) count++;
            if(nums[i] > nums[i + 1]){
                count++;
            }
        }
        return count <=1;
    }
};