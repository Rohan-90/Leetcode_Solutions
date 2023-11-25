class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < m; i++) nums1.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end());
        if((n+m) % 2 == 1) return nums1[(n+m)/2];
        else return (double)((double)nums1[(n+m)/2] + (double)nums1[(n+m)/2 -1])/2.0;
    }
};