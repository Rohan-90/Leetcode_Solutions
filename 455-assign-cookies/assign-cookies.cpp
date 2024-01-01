class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        int j = 0;
        int i = 0;
        while(j < g.size() && i < s.size()){
            if(s[i] >= g[j]){
                count++;
                j++;
                i++;
            }
            else if(s[i] < g[j]) i++;
        }
        return count;
    }
};