class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // unordered_map<int,int> mp;
        // for(int i = 0; i < numbers.size(); i++) {
        //     if(mp.find(target - numbers[i]) != mp.end()) return {(mp[target - numbers[i]] + 1), i + 1};
        //     mp[numbers[i]] = i;
        // }
        // return {};
        int n =numbers.size();
        int start = 0, end = n - 1;
        while(start < end) {
            if(numbers[start] + numbers[end] == target) return {start + 1, end + 1};
            if(numbers[start] + numbers[end] > target) {
                end--;
            }
            else if(numbers[start] + numbers[end] < target) start++;

        }
        return {};
    }
};