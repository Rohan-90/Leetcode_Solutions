class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    if (nums.size() < 4) return ans;  // Need at least 4 elements

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 3; i++) {
        // Skip duplicate values for i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < nums.size() - 2; j++) {
            // Skip duplicate values for j
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            long long res = (long long)(target) - (long long)(nums[j]) - (long long)(nums[i]);
            int start = j + 1;
            int end = nums.size() - 1;

            while (start < end) {
                long long sum = (long long)(nums[start]) + (long long)(nums[end]);
                if (sum == res) {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    ans.push_back(temp);

                    // Move both pointers to find other pairs
                    while (start < end && nums[start] == temp[2]) start++;
                    while (start < end && nums[end] == temp[3]) end--;
                } else if (sum > res) {
                    end--;
                } else {
                    start++;
                }
            }

            // Skip duplicate values for j
            while (j < nums.size() - 2 && nums[j] == nums[j + 1]) j++;
        }

        // Skip duplicate values for i
        while (i < nums.size() - 3 && nums[i] == nums[i + 1]) i++;
    }

    return ans;
    }

};