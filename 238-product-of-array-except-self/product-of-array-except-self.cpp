class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int count = 0;
        int index;
        for(int  i = 0; i < nums.size(); i++) if(nums[i] == 0){
            count++;
            index = i;
        } 
        int product = 1;
        for(auto it : nums) if(it != 0) product *= it;  
        if(count >= 2) return ans;
        else if(count == 1){
            ans[index] = product;
            return ans;
        }
        else{
            for(int i = 0; i < nums.size(); i++){
                int val = product / nums[i];
                ans[i] = val;
            }
        }
        return ans;
    }
};