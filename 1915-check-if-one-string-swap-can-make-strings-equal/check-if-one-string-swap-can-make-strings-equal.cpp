class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        vector<int> diff(2, -1);
        int count = 0, k = 0;
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                count++;
                if(k < 2) {
                    diff[k] = i;
                }
                k++;
            }
        }
        if(count != 2) return false;
        swap(s1[diff[0]], s1[diff[1]]);
        return s1 == s2;
    }
};