class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int> arr;
        int ans = 0;
        int digi_count = 2;
        for(auto it : word){
            if(digi_count > 9) digi_count = 2;
            arr[digi_count]++;
            ans += arr[digi_count];
            digi_count++;
        }
        return ans;
    }
};