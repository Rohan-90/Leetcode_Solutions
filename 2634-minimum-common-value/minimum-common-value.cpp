class Solution {
public:
    bool solve(vector<int>& nums1, int& target){
        long long low = 0;
        long long high = nums1.size();
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if(nums1[mid] == target) return true;
            else if(nums1[mid] > target) high = mid - 1;
            else low = mid + 1; 
        }
        return false;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i < nums2.size(); i++){
            int target = nums2[i];
            if(solve(nums1, target)) return target;
        }
        return -1;
    }
};