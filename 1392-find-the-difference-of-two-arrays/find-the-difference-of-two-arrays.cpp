class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1,mp2;
        set<int> st1,st2;
        vector<int> ans1,ans2;
        for(auto it : nums1) mp1[it]++;
        for(auto it : nums2) mp2[it]++;
       
        for(int i = 0; i < nums1.size(); i++){
            if(mp2[nums1[i]] == 0) st1.insert(nums1[i]);   
        }
        for(int i = 0; i < nums2.size(); i++){
            if(mp1[nums2[i]] == 0) st2.insert(nums2[i]);   
        }

        for(auto it : st1) ans1.push_back(it);
        for(auto it : st2) ans2.push_back(it);
        return {ans1, ans2};
    }
};