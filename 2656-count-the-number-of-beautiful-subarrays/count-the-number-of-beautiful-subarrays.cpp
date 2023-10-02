class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
       int sum = 0;
       long long count = 0;
       unordered_map<int,int> map;
       map[0] = 1;
       for(auto it : nums){
           sum ^= it;
           count += map[sum];
           map[sum]++;
       }
       return count;
    }
};