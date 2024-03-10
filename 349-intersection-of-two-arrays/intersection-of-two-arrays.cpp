class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto it : nums1) m[it]++;
        for(int  i = 0; i < nums2.size(); i++){
            if(m.find(nums2[i]) != m.end()) ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};