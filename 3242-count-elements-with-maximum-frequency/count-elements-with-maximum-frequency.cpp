class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it: nums) m[it]++;
        int maxi = 0;
        for(auto it : m){
            if(it.second > maxi) maxi = it.second;
        }
        int ans = 0;    
        for(auto it : m) if(it.second == maxi) ans += maxi;
        return ans;
    }
};