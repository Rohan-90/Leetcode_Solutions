class Solution {
public:
    vector<int> countSort(vector<int>& nums){
      
        map<int,int> mp;
        for(auto it : nums) mp[it]++;
        nums.clear();
        for(auto it : mp){
            int count = it.second;
            while(count--){
                nums.push_back(it.first);
            }
        }
        return nums;
    }
    int maximumGap(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        vector<int> temp = countSort(nums);
        int maxGap = INT_MIN;
        for(int i = 1; i < temp.size(); i++){
            int gap = temp[i] -temp[i-1];
            maxGap = max(maxGap,gap);
        }
        return maxGap;
        /*
        if(nums.size() == 1) return 0;
        sort(nums.begin(),nums.end());
        int maxGap = INT_MIN;
        int n = nums.size();
        for(int i = 1; i < n; i++){
            int gap = nums[i] - nums[i-1];
            maxGap = max(maxGap,gap);
        }
        return maxGap; */
    }
};