class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26,0);
        for(auto it : s) {
            freq[it - 'a']++;
        }
        int length = 0;
        for(auto it : freq) {
            if(it >= 3) {
                if(it % 2 == 0) {
                    length += 2;
                }
                else length += 1;
            }
            else length += it;
        }
        return length;
    }
};