class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int tuples = 0, n = nums.size();
        // for(int i = 0; i < n; i++) {
        //     for(int j = n - 1; j > i; j--) {
        //         unordered_set<int> st;
        //         int prod = nums[i] * nums[j];
        //         for(int k = i + 1; k < j; k++) {
        //             if(prod % nums[k] == 0) {
        //                 int checkNum = prod / nums[k];
        //                 if(st.find(checkNum) != st.end()) tuples++;
        //                 st.insert(nums[k]);
        //             }
        //         }
        //     }
        // }
        // return tuples * 8;
        int n = nums.size(), tuples = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                int prod = nums[i] * nums[j];
                m[prod]++;
            }
        }
        for(auto it : m) {
            if(it.second > 1) {
                tuples += (it.second * (it.second - 1)) / 2; 
            }
        }
        return tuples * 8;
    }
};