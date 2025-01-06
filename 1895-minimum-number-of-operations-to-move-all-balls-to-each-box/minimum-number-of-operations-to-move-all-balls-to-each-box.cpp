class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        vector<pair<int,int>> ones;
        for(int i = 0; i < boxes.size(); i++) {
            if(boxes[i] == '1') ones.push_back({1,i});
        }
        for(int i = 0; i < boxes.size(); i++) {
            int num = 0;
            for(auto it : ones) {
                num += abs(it.second - i);
            }
            ans[i] = num;
        }
        return ans;
    }
};