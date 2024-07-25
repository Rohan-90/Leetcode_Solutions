class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        unordered_map<int,int> m;
        for(auto it : nums) m[it]++;
        
        int j = 0;
        for(int i = mini; i <= maxi; i++) {
            while(m[i] > 0) {
                nums[j] = i;
                m[i]--;
                j++;
            }
        }
        return nums;
    }
};