class Solution {
public:
    bool solve(string& wd, vector<int>& arr){
        vector<int> nums(26,0);
        for(auto ch : wd){
            int num = ch - 'a';
            nums[num]++;
            if(nums[num] > arr[num]) return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> arr(26, 0);
        for(auto it : chars){
            int num = it - 'a';
            arr[num]++;
        }
        int ans = 0;
        for(auto& it : words){
            if(solve(it, arr) == true){
                ans += it.length();
            }
        }
        return ans;
    }
};