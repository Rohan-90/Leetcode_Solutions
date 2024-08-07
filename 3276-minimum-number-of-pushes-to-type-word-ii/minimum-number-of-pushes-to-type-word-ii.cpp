class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr(26,0);
        for(auto it : word){
            int ch = it - 'a';
            arr[ch]++;
        }
        sort(begin(arr), end(arr));
        int count = 0;
        int ans = 0, k = 0;
        for(int i = 25; i >= 0; i--) {
            int freq = arr[i];
            int press = k / 8 + 1;
            ans += press * freq;
            k++;
        }
        return ans;
    }
};